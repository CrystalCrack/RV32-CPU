function addenv() {
  sed -i -e "/^export $1=.*/d" ~/.bashrc
  echo "export $1=`readlink -f $2`" >> ~/.bashrc
  echo "By default this script will add environment variables into ~/.bashrc."
  echo "After that, please run 'source ~/.bashrc' to let these variables take effect."
  echo "If you use shell other than bash, please add these environment variables manually."
}

addenv CPU_HOME `pwd`