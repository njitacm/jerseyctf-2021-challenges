# DeadRobin's Write-up for investigating-windows

---

1. from the hints i understood that i should use a tool called regripper and after installing it i found this [article](https://resources.infosecinstitute.com/topic/registry-forensics-regripper-command-line-linux/)
2. in the article it says `The ProfileList key in the registry can be used to resolve  SIDs to users on the machine. If a user has logged onto this machine, a  subkey with that user’s SID as its name will be created under  ProfileList. Use the profilelist plugin in RegRipper to pull this  information` so lets try it

```bash
$ regripper -r software -p profilelist
Launching profilelist v.20200518
profilelist v.20200518
(Software) Get content of ProfileList key

Microsoft\Windows NT\CurrentVersion\ProfileList

Path      : %systemroot%\system32\config\systemprofile
SID       : S-1-5-18
LastWrite : 2013-08-22 13:25:43Z

Path      : C:\Windows\ServiceProfiles\LocalService
SID       : S-1-5-19
LastWrite : 2013-08-22 14:48:03Z

Path      : C:\Windows\ServiceProfiles\NetworkService
SID       : S-1-5-20
LastWrite : 2013-08-22 14:48:02Z

Path      : C:\Users\robbr
SID       : S-1-5-21-1410353290-3892556988-1991803543-1001
LastWrite : 2021-03-16 23:02:27Z

Path      : C:\Users\Administrator
SID       : S-1-5-21-1410353290-3892556988-1991803543-500
LastWrite : 2021-03-16 22:59:46Z

```

3. and we have the flag

   ```
   jctf{S-1-5-21-1410353290-3892556988-1991803543-1001}
   ```

   