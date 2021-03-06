#include "FHE.h"

/*Load secret integer from file.*/
string loadInteger(string filename);

/*Compare encoded input with secret value.*/
bool doComparison(string opEncStrOne, string optwo);

/*Read public and private keys from file*/
void readKeys(char *pubkeyfilename, char *privkeyfilename);

/*Initialize library.*/
void setupHELib();

/*Encode integer as ciphertext.*/
string returnIntEncodedAsHECiphertext(int val);