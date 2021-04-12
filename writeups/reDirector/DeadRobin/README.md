# DeadRobin's Write-up for reDirector

---

1. from the name we can understand that we will be redirected alot so lets open burp suite to intercept each request manually

2. nothing special in the first request but then we can notice that each redirect is of one letter so maybe if we gather them we could achieve something

```
GET /j HTTP/1.1
GET /c HTTP/1.1
GET /t HTTP/1.1
GET /f HTTP/1.1
GET /%7B HTTP/1.1
GET /y HTTP/1.1
GET /0 HTTP/1.1
GET /u HTTP/1.1
GET /_ HTTP/1.1
GET /l HTTP/1.1
GET /1 HTTP/1.1
GET /k HTTP/1.1
GET /E HTTP/1.1
GET /m HTTP/1.1
GET /Y HTTP/1.1
GET /- HTTP/1.1
GET /R HTTP/1.1
GET /e HTTP/1.1
GET /d HTTP/1.1
GET /i HTTP/1.1
GET /r HTTP/1.1
GET /3 HTTP/1.1
GET /C HTTP/1.1
GET /T HTTP/1.1
GET /s HTTP/1.1
GET /%7D HTTP/1.1
```

3. forming all of them together and url decoding for the brackets we get the flag

```
jctf{y0u_l1kEmY-Redir3cts}
```



