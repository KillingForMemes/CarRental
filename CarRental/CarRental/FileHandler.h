#pragma once
#include <iostream>

using namespace std;
class FileHandler
{
public:
    char key1 = 'C';
    char key2 = 'A';
    char key3 = 'R';
    /// <summary>
    /// Function both encrypts and decrypts given text using XOR crypting with a previously given key
    /// </summary>
    /// <param name="message">string to be encrypted</param>
    /// <returns></returns>
    string Encrypt(string toEncrypt);

};