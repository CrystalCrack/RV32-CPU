#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  int i = 0;
  while (*fmt != '\0') {
    if (*fmt == '%') {
      fmt++;
      switch (*fmt) {
        case 'd': {
          int num = va_arg(ap, int);
          char buf[32];
          int buf_index = 0;
          if (num < 0) {
            out[i++] = '-';
            num = -num;
          }
          do {
            buf[buf_index++] = num % 10 + '0';
            num /= 10;
          } while (num);
          for (int j = buf_index - 1; j >= 0; j--) {
            out[i++] = buf[j];
          }
          break;
        }
        case 's': {
          const char *str = va_arg(ap, const char *);
          while (*str != '\0') {
            out[i++] = *str++;
          }
          break;
        }
        default:
          out[i++] = '%';
          out[i++] = *fmt;
          break;
      }
    } else {
      out[i++] = *fmt;
    }
    fmt++;
  }
  out[i] = '\0';
  return i;
}

int sprintf(char *out, const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  int ret = vsprintf(out, fmt, args);
  va_end(args);
  return ret;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
