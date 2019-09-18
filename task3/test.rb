#!/usr/bin/ruby -w
require 'nokogiri'
require 'open-uri'
require 'pry'

doc = Nokogiri::HTML(open("https://www.google.com/search?q=linux"))
node= doc.xpath("//a") 
node.each do |node|
 puts node.text
end
