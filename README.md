# minitalk

42 subject

First Circle

# what should we do?

Make contacting service between server and client by SIGUSR1 and SIGUSR2.

# status

🔁 Maybe done.

# HOW TO MOVE IT?(ENGLISH)
使用方法の説明は[こちら](#%E3%81%A9%E3%81%86%E3%82%84%E3%81%A3%E3%81%A6%E5%8B%95%E3%81%8B%E3%81%99%E3%81%8B)


※Caution : We need to use two terminals.

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


# どうやって動かすか？

※注意 : この課題では2つのターミナルを使います。

1. このレポジトリをクローンしてください。

```
git clone git@github.com:HinataKikuchi/minitalk.git
```

2. メイクしてもろて

```
$ cd ./minitalk
$ make
```

3. Type command bellow. Then you'll find server pid.

```./server```を実行すると鯖のpid(プロセスID)が表示されます

```
$ ./server
```

こんな感じ
#### (example)

```
SERVER PID_(:3 <)_ : <Process ID>
```

4. もう一つターミナルを開いて以下のコマンドを実行します。

```
$ ./client <Process ID> "MESSAGE"
```

> ```<Process ID>``` : ```./server```で確認した値

> ```"MESSAGE"``` : serverに送信したいメッセージ


5. ```./server```を動かしたもう一つのターミナルへ移動します。メッセージが届いているのが確認できるはずです。

6. おーわり！