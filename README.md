# minitalk

42 subject

First Circle

# what should we do?

Make contacting service between server and client by SIGUSR1 and SIGUSR2.

# status

ðDONE!!!ð¥³ð

[![hkikuchi's 42Project Score](https://badge42.herokuapp.com/api/project/hkikuchi/minitalk)](https://github.com/JaeSeoKim/badge42)


# HOW TO MOVE IT?(ENGLISH)
ä½¿ç¨æ¹æ³ã®èª¬æã¯[ãã¡ã](#%E3%81%A9%E3%81%86%E3%82%84%E3%81%A3%E3%81%A6%E5%8B%95%E3%81%8B%E3%81%99%E3%81%8B)


â»Caution : We need to use two terminals.

1. Git clone this repository to your rocal environment. (If you already git user and could reach here, then you know this command.)

```
git clone git@github.com:HinataKikuchi/minitalk.git
```

2. JUST DO MAKE

```
$ cd ./minitalk
$ make
```

3. Run ```minitalk/server```, then you'll find server pid.

```
$ ./server
```
Like this

#### (example)

```
SERVER PID_(:3 <)_ : <Process ID>
```

4. Open another terminal and type command bellow.

```
$ ./client <Process ID> "MESSAGE"
```

5. Back to your another terminal where running ```./server```. You'll find the MESSAGE was recieved.

6. FIN.


# ã©ããã£ã¦åãããï¼

â»æ³¨æ : ãã®èª²é¡ã§ã¯2ã¤ã®ã¿ã¼ããã«ãä½¿ãã¾ãã

1. ãã®ã¬ãã¸ããªãã¯ã­ã¼ã³ãã¦ãã ããã

```
git clone git@github.com:HinataKikuchi/minitalk.git
```

2. ã¡ã¤ã¯ãã¦ããã¦

```
$ cd ./minitalk
$ make
```

3. ```./server```ãå®è¡ããã¨é¯ã®pid(ãã­ã»ã¹ID)ãè¡¨ç¤ºããã¾ã

```
$ ./server
```

ãããªæã
#### (example)

```
SERVER PID_(:3 <)_ : <Process ID>
```

4. ããä¸ã¤ã¿ã¼ããã«ãéãã¦ä»¥ä¸ã®ã³ãã³ããå®è¡ãã¾ãã

```
$ ./client <Process ID> "MESSAGE"
```

> ```<Process ID>``` : ```./server```ã§ç¢ºèªããå¤

> ```"MESSAGE"``` : serverã«éä¿¡ãããã¡ãã»ã¼ã¸


5. ```./server```ãåãããããä¸ã¤ã®ã¿ã¼ããã«ã¸ç§»åãã¾ããã¡ãã»ã¼ã¸ãå±ãã¦ããã®ãç¢ºèªã§ããã¯ãã§ãã

6. ãã¼ããï¼