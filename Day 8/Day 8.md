# Day 8

##  What is CFT ?
* It is a service provided by the AWS in order to make multiple resoures at the same time. 

* It takes less time to create all the resources using CFT.

* It uses JSON to create the resources. Sample templates are provided by the AWS.

***Advantage of using CFT is,*** 

Suppose we made multiple resources in our CFT,

 eg: EC-2, Lambda, S3, Snapshot, RDBMS, IAM role, then we dont have to remember to delete each of the resources individually, we can delete all at one go by deleting the CFT itself.

We can even update resources in our CFT. We cannot delete a particular resource from CFT.

CFT is completely free, only the resources we create will charge.
***
_[**NOTE** : If anyone made 50 EC2's using CFT and then go to UI and manually delete 2 EC2's, then at the time of deleting your CFT, your CFT deletion process will give error saying **"you have made 50 EC2s, 2 of them are missing; cannot delete the CFT"**.]_
***
## Deploying a very basic website on AWS
a. Sir created a windows EC2 on AWS, installed JDK and TomCat, created a .var file, uploaded it in TomCat's WebApps folder.

b. He then edited EC2's inbound rule and added 8080 port (TomCat's port number), and in inside his EC2 (windows) he edited Firewall inbound rule and added 8080 port.

c. By doing this, the server which was originally created inside EC2, was now accessible in Sir's local PC (mac).

d. He just put in the browser url box, localhost:8080/dac (dac is the folder created when we add the var file in WebApps and run the TomCat)
***
## How to run TomCat
a. Install JDK, install TomCat

b. Go to TomCat folder --> bin --> Run startup.bat file.

c. If there is an error saying JAVA_HOME not defined, then goto Windows variables -> Environment variables -> add `JAVA_HOME' and in the value copy_paste your JDK folder location.

d. Shut down and restart your PC and then run the TomCat again. Your server is hopefully ready.
***
***