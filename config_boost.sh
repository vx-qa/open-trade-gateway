ECHO "install boost 1.68.0" 
cd ~
apt update -y && apt install gcc g++ -y

wget https://dl.bintray.com/boostorg/release/1.68.0/source/boost_1_68_0.tar.gz && tar -zxvf boost_1_68_0.tar.gz

cd boost_1_68_0 && ./bootstrap.sh && ./b2 && ./b2 install && ldconfig
