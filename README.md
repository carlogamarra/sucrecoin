Sucrecoin
Sucrecoin (xsr) is a decentralised open source digital currency.

- Advanced hybrid proof-of-work (PoW) and proof-of-stake (PoS)
- 21.2 million coins to be produced
- block hashing is BLAKE2s
- PoW hashing is NeoScrypt
- PoS hashing is SHA-256d
- 1 minute combined block target (1.5 minutes for PoW, 3 minutes for PoS)
- retargets every block using Orbitcoin Super Shield (OSS)
- time warp and instamining protection
- advanced checkpointing against 51% attacks
- transaction messaging supported
- PoW and PoS blocks carry the same fixed reward of 100 xsr
- 6 confirmations for regular transactions
- 50 confirmations for minted coins
- very low transaction fees (most transactions are free)
- no destruction of transaction fees (all collected by a block finder)
- the default P2P port is 2102, RPC port is 2103
- I2P/Tor ready

Download
Please visit https://bitbucket.org/charliegama/sucrecoin/src

Support
See https://bitcointalk.org/index.php?topic=2647057 if you need advice.

-----------------------------------------
Installed dependencies.

-----------------------------------------

sudo apt-get -y install aptitude ; 
    sudo aptitude -y install software-properties-common build-essential -y ; 
    sudo aptitude -y install libtool autotools-dev automake pkg-config libssl-dev libevent-dev bsdmainutils git cmake libboost-all-dev zlib1g-dev libz-dev libseccomp-dev libcap-dev libminiupnpc-dev -y ;
    sudo aptitude -y install libminiupnpc10 libzmq5 -y ;
    sudo aptitude -y install libcanberra-gtk-module libqrencode-dev libzmq3-dev -y ;
    sudo aptitude -y install libqt5gui5 libqt5core5a libqt5webkit5-dev libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev protobuf-compiler -y ;
    sudo add-apt-repository -y ppa:bitcoin/bitcoin ;
    sudo apt-get -y update ;
sudo apt-get install -y libdb4.8-dev libdb4.8++-dev libdb5.3 libdb5.3++ -y ;
