# Day 3

## S3 Service

S3 is storage secure service,which is a storage engine where we can store any data as an object. We have to create "Bucket" inside S3 to insert and store the data. Bucket is similar to folder where we can create anather folder inside it ar we can directly store data inside bucket. The name of top parent bucket should be unique.We cannot store data without creating bucket inside S3.
We can also do web-hosting on s3 if the pages are static or dynamic pages are created _react_ only. The website host in the following way,

__*https//vita-demo-20.S3.amazonaws.com/dac/welcome.html*__

        where,
                https// -> prefix

                vita-demo-20 -> Bucket name

                S3.amazonaws.com -> Domain name

                /dac/welcome.html -> Folder

---
## Remote login

For remote login, linux created command which is SSH i.e., Secure server Shell login. General scenario in linux of SSH,

            Username@ip-address
            Password : ***

            Ex.: ec2-user@10.20.30.00

In the initial days, usewrname and passward were considered the most secure approach. Bit as the digitalization takes place, the computing power increases. There was a source called _"Brute force attack"_ due to which the username a password can be hacked using programming, as it is very simple for computer to create various combinations. So now a days, we have only 3 or 4 chances to give password or the site will be block to avoid the hacking.
A linux cryptographer introduce an idea of private key and public key.

* Public Key -> .pem -> private file
       
* Private Key -> AWS -> ec-2

Public key and private key are atlach to each other where private key i.e., .pem file is an encripted source which is unique and hard to hack.

Using SSh we pass private file path at first and the we pass _username@ip_ to access the system.

    [ec2 - user@ip - 172.31.93.75 ~]$
    <username>   @   <hostname/ip>
    Here,
        $ -> You are not root (admin) user

    If we have # insted of $ then,
        # -> Admin/root privilages are granted
        / -> Root
---
## Some of Linux commands

* sudo su -> To go on root.

* ls     -> List directory/file (Navigation command).

* pwd    -> Print working derectory.

_Root can enter in any home workspace, root do not have any home workspace._

* cd     -> Change directory (Navigation command).

* clear  -> Clear screen.

* mkdir  -> Create directory.

* vi     -> Tool program (Notepad).
    
    Eg.: vi demo.txt

* i      -> Insert

In _vi_ , we have to use _ESC_ after every command.

* :w     -> Write in the file.

* :q     -> Quit the file.

* :wq    -> Write and quit.

* :wq!   -> Force write and quit.

Here, _!_ is use with any of the command to force, in any situation.

---

## Path

* __What is path?__

  -> _Location_

There are two types of path names:
    
1. Absolute path names

    An absolute path name begins with the root directory and follows the tree branch untill the path to desired direction or the file is completed.

    / -> root

    Eg.: /home/ec2-user/text  


2. Relative path names

    .  -> Current or working directory.

    .. -> Working directory's parent directory.

    Absolute part starts from working directory.

Both the paths are useful in different cases. To increase the readability, abolute path is useful where as to make project dynamic, relative path is useful. Using relative path, we do not have to change the code in enviornment as well.

---
## Database as a service:

* Using RDS (Relational Database Service), we can get my sql, sql server, oracle, arora sql, etc from AWS.

* We do not need experties in _Admin_ , as well as we do not need to pay for RDS services.

---
---
 



