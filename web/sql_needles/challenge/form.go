package main

// https://gowebexamples.com/forms/

import (
	"fmt"
	"log"
	"net/http"
	"os/exec"
	"strconv"
	"text/template"
)

type LoginInfo struct {
	Username string
	Password string
}

type dbRet struct {
	Success bool
	flag    string
}

func vulnerablePYDB(logInfo LoginInfo) string {
	cmd := exec.Command("python3", "connDB.py", logInfo.Username, logInfo.Password)

	out, err := cmd.Output()

	if err != nil {
		log.Fatal(err)
	}

	s := string(out)

	return s
}

func webserve(port string) {
	tmpl := template.Must(template.ParseFiles("index.html"))

	http.HandleFunc("/", func(w http.ResponseWriter, r *http.Request) {
		if r.Method != http.MethodPost {
			tmpl.Execute(w, nil)
			return
		}

		data := LoginInfo{
			Username: r.FormValue("username"),
			Password: r.FormValue("password"),
		}

		retStr := vulnerablePYDB(data)
		fmt.Printf("%s", retStr)

		if retStr != "" {
			retData := dbRet{
				Success: true,
				flag:    retStr,
			}

			tmpl.Execute(w, retData)
		}

		tmpl.Execute(w, nil)
		// _ = data // run python script for this
		// fmt.Printf("Username: %s\n", data.Username)
		// fmt.Printf("Password: %s\n", data.Password)
		// fmt.Printf("%s and %s", data.Username, data.Password)

	})

	http.ListenAndServe(":"+port, nil)
}

func main() {

	// Ensuring that the following code works
	// trial := LoginInfo{"yes", "' or 1=1;--"}
	// fmt.Println(vulnerablePYDB(trial))

	const PORT = 9990

	port := strconv.Itoa(PORT)

	fmt.Println("Running on port:", port)

	webserve(port)

}
