#  Difference Between AMI and Snapshot.

* Most basic difference between AMI and snapshot is the type of services they are associated with. Snapshots are associated with EBS while AMIs are associared with EC2 instances (Amazon Elastic Block Store (Amazon EBS) provides block level storage volumes for use with EC2 instances).

* Snapshots are the backup of the data on EBS volumes, whereas AMIs are (bootable) copy of the whole EC2 instances.

* AMIs are used to store the current instance configurations.

* Taking snapshots of non EBS backed instances are not possible but AMI of a non EBS backed instances can be created.