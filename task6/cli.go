package main

import( 
  "os"
  "fmt"
  "flag"
  "github.com/dghubble/go-twitter/twitter"
  "github.com/dghubble/oauth1"
)
func main (){


config := oauth1.NewConfig("consumerKey", "consumerSecret")
token := oauth1.NewToken("accessToken", "accesssecret")

httpClient := config.Client(oauth1.NoContext, token)


client := twitter.NewClient(httpClient)

var thandle string
 fmt.Println("Enter the twitter user handle")
 fmt.Scan(&thandle)

var uname =  flag.String("thandle" ,thandle,"twitter user name ")
 flag.Parse()

followers, resp, err := client.Followers.List(&twitter.FollowerListParams{
                      ScreenName: *uname,

})
fmt.Println(resp)
fmt.Println("\n")
fmt.Println(err)
fmt.Println("\n")

var c int = 0
f, err := os.Create("test.txt")
for _,followers := range followers.Users{
c++
f.WriteString("\n")
f.WriteString(followers.ScreenName)
}
fmt.Println("number of followers : ", c)
}

 

