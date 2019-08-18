extern crate regex;
use regex::Regex;
use std::io;
fn main(){
  println!("enter the email id");
  let mut text= String::new();
  io::stdin()
       .read_line(&mut text) 
       .expect("failed to read a line");
  assert!(Regex::new(r"\w[a-zA-Z0-9._+-]+@[a-zA-Z0-9._]+\.[a-zA-Z]").unwrap().is_match(&text));
 }

