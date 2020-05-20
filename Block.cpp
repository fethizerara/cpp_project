#include <iostream>
#include <string>

#define HEADER_BLOC 50 
#define TRANSACTIONS 500 
#define PREV_BLOCK_HASH 250 

class Block{
private : char header[ HEADER_BLOC ];
private : char transactions[ TRANSACTIONS ];
private : char prev_block_hash[ PREV_BLOCK_HASH ];
private : int nonce;

public : char * getHeader();
public : char * getTrans();
public : char * getPrevBlockHash();
public : int getNonce();
public : void setNonce(int newNonce);

};

char * Block::getHeader(){
return header;

}

char * Block::getTrans(){
return transactions;

}

char * Block::getPrevBlockHash(){
return prev_block_hash;

}

int Block::getNonce(){
return nonce;

}

void Block::setNonce(int newNonce){
    
 nonce=newNonce ;

}



int main() 
{ 
    
}