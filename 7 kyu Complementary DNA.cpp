#include <string>

std::string DNAStrand(const std::string& dna)
{
 std::string s="";
  for(int i = 0; i < dna.length();i++)
 {
 	if(dna[i]=='A')
 	s+='T';
 	else if(dna[i]=='T')
 	s+='A';
 	else if(dna[i]=='C')
 	s+='G';
	else
	s+='C';
 }
 return s; //your code here
}
