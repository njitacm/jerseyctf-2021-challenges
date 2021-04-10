package main

// https://gowebexamples.com/forms/

import (
	"net/http"
	"os"
	"os/exec"
	"path/filepath"
	"strconv"
	"strings"
	"text/template"
)

type LoginInfo struct {
	Username string
	Password string
}

func getAbsLocation() string {
	file, _ := exec.LookPath(os.Args[0])
	path, _ := filepath.Abs(file)
	index := strings.LastIndex(path, string(os.PathSeparator))
	ret := path[:index]
	return ret
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

		_ = data // run python script for this
		// fmt.Printf("%s and %s", data.Username, data.Password)

		tmpl.Execute(w, struct{ Success bool }{true})

	})

	http.ListenAndServe(":9990", nil)
}

func main() {

	const PORT = 9990

	port := strconv.Itoa(PORT)

	webserve(port)

}
