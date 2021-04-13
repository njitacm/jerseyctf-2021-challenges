# Resources from JCTF
* Ceremony Slides
* Backend Web Code
* Some Speaker Notes

## Ceremony Slides
<!-- More like Ceremoney -->
* [JerseyCTF Opening Ceremony](https://docs.google.com/presentation/d/1kF8u1f4Vr4wr1c_JM5Ct8yQSILD22Bx2WwYI49L7sDs/edit#slide=id.p)
* [JerseyCTF Closing Ceremony](https://docs.google.com/presentation/d/1LInif-KFnxkv8wILIRVDxJxKUUp3cjDsr9roERaeSjY/edit#slide=id.g7a02ec5f50_0_163)

## Backend Web Code 
<!-- Written up and developed by AOrps with help from DigitalOcean's Wonderful Support
-->
* All Web Site Server services used Nginx 

```txt
insp3ctor -> jerseyctf.xyz
post-up -> jerseyctf.info
clientside -> jerseyctf.live
reDirector -> jerseyctf.net
```
### Startup Dependency Script
```bash
#!/bin/bash

# All the Dependecies needed
sudo apt install nginx golang-go python3 -y
```

### inspector Server
* [Golang Server](https://github.com/njitacm/jerseyctf-registration-site/blob/main/serve.go)
* Nginx Config 
    ```nginx
    server {
        server_name jerseyctf.xyz www.jerseyctf.xyz;

        root /home/acm/inspector;
        index index.html;

        location / {
            proxy_pass http://localhost:9990;
        }
    }
    ```
### postup Server
* Golang Server Backend
    ```go
    package main

    import (
        "fmt"
        "log"
        "net/http"
    )

    func getFlag(w http.ResponseWriter, r *http.Request) {

        if r.Method != http.MethodPost {
            fmt.Fprintf(w, "POST UP BROTENDO\n")
            return
        }

        fmt.Fprintf(w, "jctf{P0st_M3th0ds_4re_c0ol_broTendo}\n")

    }

    func main() {
        http.HandleFunc("/", getFlag)

        if err := http.ListenAndServe(":9990", nil); err != nil {
            log.Fatal(err)
        }

    }
    ```

* Nginx Config
    ```nginx
    server {
        server_name jerseyctf.info www.jerseyctf.info;

        location / {
            proxy_pass http://localhost:9990;
        }
    ```


### clientside Server
* [Golang Server](https://github.com/njitacm/jerseyctf-registration-site/blob/main/serve.go)
* Nginx Config 
    ```nginx
    server {
            server_name jerseyctf.live www.jerseyctf.live;

            root /home/acm/clientside;
            index index.html;

            location / {
                    proxy_pass http://localhost:9990;
            }
    }
    ```

### redirector Server
* [Python Tutorial with uWSGI](https://www.digitalocean.com/community/tutorials/how-to-serve-flask-applications-with-uswgi-and-nginx-on-ubuntu-18-04)
* Nginx Config
    ```nginx
    server {
        listen 80;
        server_name jerseyctf.net www.jerseyctf.net;

        location / {
            include uwsgi_params;
            uwsgi_pass unix:/home/acm/redirector/redirector.sock;
        }
    }
    ```

---

## Speaker Resources
<!-- Report Done by DatGuy000 -->

### Gabrielle Botbol
* Physical Intrusion
    * “Code name 23-00”
    * https://gabrielleb.fr/blog/2020/06/13/code-name-23-00-nom-de-code-23-00/
* Pentest Report
    * https://gabrielleb.fr/blog/2021/02/14/how-to-write-a-pentest-report/
* Vulnerabilities??
    * XSS: https://owasp.org/www-community/attacks/xss/ 
    * SQLI: https://owasp.org/www-community/attacks/SQL_Injection 
    * Directory traversal: https://owasp.org/www-community/attacks/Path_Traversal
* More resources and advice on my blog:
    * https://gabrielleb.fr/blog/2018/09/16/ressources-resources/
    * https://gabrielleb.fr/blog/2020/10/18/how-to-get-started-with-pentesting/ 
* Hacking tools:
     * Tryhackme:  https://tryhackme.com/ (more beginner-friendly)
    * Hackthebox: https://www.hackthebox.eu/ (steeper learning curve)
* Contact Info
    * Twitter: @Gabrielle_BGB
    * Linkedin:   /in/gabriellebotbol
    * [Blog](https://gabrielleb.fr/blog)
    * Feel free to connect: https://www.linkedin.com/in/gabriellebotbol/


### Seth Kirschner
* Speaker for big4 cyber currently at MUFG Securities Americas leading application and data security
    * https://www.linkedin.com/in/sethkirschner 

### Ilan Ponimansky
* [Github Presentation](https://github.com/iloveicedgreentea/jerseyctf-presentation)
* [LinkedIn](https://www.linkedin.com/in/ilanponimansky/) 

### Jon Helmus
* [LinkedIn](https://www.linkedin.com/in/jon-helmus-474146103/)
* [HTB Seattle Discord Link](https://discord.gg/XduZrTBp)

### William Price
* [Presentation Slides](https://docs.google.com/presentation/d/1mkUdhZDPWkiOZ4BITrBfLOzFGB0ZgDno7MmwHkopylc/edit?usp=sharing)

### John Jackson 
* Resources: 
    * TryHackMe [Friendly & Flexible] 
    * HackTheBox [More Difficult] 
    * Vulnhub [Wide Range, Hard to Vet]
    * CTF Events [Haystack, For-fun, Least Flexible] 
* https://any.run/ 
* https://github.com/projectdiscovery/nuclei
* https://github.com/OJ/gobuster
* Books
    * Penetration Testing: A Hands-On Introduction to Hacking, _Georgia Weidman_
    * Advanced Penetration Testing: Hacking the World's Most Secure Networks _WIL ALLSOPP_
    * AWS Penetration Testing: Beginner's guide to hacking AWS with tools such as Kali Linux, Metasploit, and Nmap _Jonathan Helmus_
    * Corporate CyberSecurity: Identifying Risks and The Bug Bounty Program _John Jackson_
---