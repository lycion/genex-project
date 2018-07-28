# The Genex Core Project

![alt text](https://github.com/genexcore/genex-project/blob/master/src/qt/res/icons/about.png "Genex Core")

### Current build instructions

> cd ..

> cd ..

> cd usr/src/

> sudo git clone https://github.com/genexcore/genex-projject

> cd genex-project

> sudo chmod +x autogen.sh share/genbuild.sh src/leveldb/build_detect_platform

> sudo chmod 777 src/leveldb

> cd depends

> sudo chmod +x config.guess config.site.in config.sub

> sudo make HOST=x86_64-w64-mingw32 -j4

> cd ..

> sudo ./autogen.sh

> sudo CONFIG_SITE=/usr/src/genex-project/depends/x86_64-w64-mingw32/share/config.site ./configure --host=x86_64-w64-mingw32 --disable-tests 
--with-qt-incdir=/usr/include/x86_64-linux-gnu/qt5 --with-qt-libdir=/usr/lib/x86_64-linux-gnu/

> sudo make HOST=x86_64-w64-mingw32 V=1 AUTOCONF=: AUTOHEADER=: AUTOMAKE=: ACLOCAL=: -i

##### Build notes

The first 2 "cd .." commands are needed as Linux's default is under $home/username/thisfolder. Sudo is also required as you've entered $usr/. Do not forget you need to chmod some files before ./autogen.sh & ./configure is able to run. Following the commands above should lead to success, these are just from my personal machine so it *MAY* be different on yours.

### Current Genex tasks

- [x] Make a fork clone of Bitcoin
- [x] Change Bitcoin algorithm
- [ ] Successful change from Bitcoin in to Genex
- [x] NO PREMINE
- [ ] Change to run on its own Blockchain
- [x] Change images & logos
- [x] Build community
- [X] Get community involved
- [ ] Launch of Genex
- [ ] Listed on exchange
- [x] New developers
- [ ] Genex TipBot
- [ ] Discord exchange bot (this could be used before Genex listed. The more times its bought and sold, the more times the price goes up and down
- [ ] Web wallet
- [ ] Pool
- [ ] Make short Genex introduction video
- [ ] Businesses accepting Genex

### Current jobs

- [x] Developers (always open for more developers to join us
- [ ] Image & Icon creators (Job filled)
- [x] Marketing
- [x] Sponsors

### Our team

Core Developer - Genex

Co Developer - Sajo811 | Zer0

Sponsor - Oxytope

Discord Mod - Navek41

### Social

https://discord.gg/3ZrMQCM - *Discord*

https://www.reddit.com/r/GenexCore - *Reddit*
