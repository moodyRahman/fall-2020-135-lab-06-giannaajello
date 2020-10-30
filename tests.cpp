#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "funcs.h"
#include "vigenere.h"
#include "decryption.h"
#include "decode.h"

// add your tests her
TEST_CASE("shift char")
{
  CHECK(shiftChar('a',3) == 'd');
  CHECK(shiftChar('C',0) == 'C');
  CHECK(shiftChar('B',-1) == 'A');
  CHECK(shiftChar('d', 3) == 'g');
}
TEST_CASE("encrypt caesar")
{
  CHECK(encryptCaesar("Hello, world!",10)=="Rovvy, Gybvn!");
  CHECK(encryptCaesar("Computer science!",7)=="Jvtwbaly zjplujl!");
  CHECK(encryptCaesar("DAEDALUS.",5)=="IFJIFQZX.");
  CHECK(encryptCaesar("!",3)=="!");
}

TEST_CASE("encrypt vigenere")
{
  CHECK(encryptVigenere("How are you?","food") == "Mck dws mrz?");
  CHECK(encryptVigenere("GUMBALL!","amazing") == "GGMAIYR!");
  CHECK(encryptVigenere("#@^%@&^&!*","hello") == "#@^%@&^&!*");
  CHECK(encryptVigenere("taco tuesday..","best") == "ueuh uywleeq..");
 }			

TEST_CASE("decrypt caesar")
{
  CHECK(decryptCaesar("xuttpd xjfxts",5) == "spooky season");
  CHECK(decryptCaesar("EPIB QA BPQA?!",8) == "WHAT IS THIS?!");
  CHECK(decryptCaesar("@#",6) == "@#");
  CHECK(decryptCaesar("qjuuxfnnw!!!!!",9) == "halloween!!!!!");
}

TEST_CASE("decrypt vigenere")
{
   CHECK(decryptVigenere("wwaqog q. rense","king") == "monkey d. luffy");
   CHECK(decryptVigenere("%&*^&*","rando") == "%&*^&*");
   CHECK(decryptVigenere("XJWAMCA & HSEJ","iconic") == "PHINEAS & FERB");
   CHECK(decryptVigenere("DITCR slik lo yx!!","weird") == "HELLO what is up!!");
}

TEST_CASE("decode"){
    CHECK(decode("hello")=="hello");
    CHECK(decode("Jvtwbaly zjplujl")=="Computer science");
    CHECK(decode("Mck dws mrz")=="How are you");
}
