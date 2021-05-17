#include <string>

using namespace std; 

string cards[52][13] = {
{ " ------------- \n",
"|AD           |\n",
"|   -------   |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |   D   |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|   -------   |\n",
"|           DA|\n",
" ------------- \n" },

{ " ------------- \n",
"|2D           |\n",
"|   -------   |\n",
"|  |       |  |\n",
"|  |   D   |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |   D   |  |\n",
"|  |       |  |\n",
"|   -------   |\n",
"|           D2|\n",
" ------------- \n" },

{ " ------------- \n",
"|3D           |\n",
"|   -------   |\n",
"|  |       |  |\n",
"|  |   D   |  |\n",
"|  |       |  |\n",
"|  |   D   |  |\n",
"|  |       |  |\n",
"|  |   D   |  |\n",
"|  |       |  |\n",
"|   -------   |\n",
"|           D3|\n",
" ------------- \n" },


{ " ------------- \n",
"|4D           |\n",
"|   -------   |\n",
"|  |D     D|  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |D     D|  |\n",
"|   -------   |\n",
"|           D4|\n",
" ------------- \n" },

{ " ------------- \n",
"|5D           |\n",
"|   -------   |\n",
"|  |D     D|  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |   D   |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |D     D|  |\n",
"|   -------   |\n",
"|           D5|\n",
" ------------- \n" },


{ " ------------- \n",
"|6D           |\n",
"|   -------   |\n",
"|  |D     D|  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |D     D|  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |D     D|  |\n",
"|   -------   |\n",
"|           D6|\n",
" ------------- \n" },

{ " ------------- \n",
"|7D           |\n",
"|   -------   |\n",
"|  |D     D|  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |D  D  D|  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |D     D|  |\n",
"|   -------   |\n",
"|           D7|\n",
" ------------- \n" },

{ " ------------- \n",
"|8D           |\n",
"|   -------   |\n",
"|  |D     D|  |\n",
"|  |   D   |  |\n",
"|  |       |  |\n",
"|  |D     D|  |\n",
"|  |       |  |\n",
"|  |   D   |  |\n",
"|  |D     D|  |\n",
"|   -------   |\n",
"|           D8|\n",
" ------------- \n" },

{ " ------------- \n",
"|9D           |\n",
"|   -------   |\n",
"|  |D     D|  |\n",
"|  |       |  |\n",
"|  |D     D|  |\n",
"|  |   D   |  |\n",
"|  |D     D|  |\n",
"|  |       |  |\n",
"|  |D     D|  |\n",
"|   -------   |\n",
"|           D9|\n",
" ------------- \n" },

{ " ------------- \n",
"|10D          |\n",
"|   -------   |\n",
"|  |D     D|  |\n",
"|  |   D   |  |\n",
"|  |D     D|  |\n",
"|  |       |  |\n",
"|  |D     D|  |\n",
"|  |   D   |  |\n",
"|  |D     D|  |\n",
"|   -------   |\n",
"|          D10|\n",
" ------------- \n" },

{ " ------------- \n",
"|JD           |\n",
"|   -------   |\n",
"|  |D      |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |   J   |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |      D|  |\n",
"|   -------   |\n",
"|           DJ|\n",
" ------------- \n" },

{ " ------------- \n",
"|QD           |\n",
"|   -------   |\n",
"|  |D      |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |   Q   |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |      D|  |\n",
"|   -------   |\n",
"|           DQ|\n",
" ------------- \n" },

{ " ------------- \n",
"|KD           |\n",
"|   -------   |\n",
"|  |D      |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |   K   |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |      D|  |\n",
"|   -------   |\n",
"|           DK|\n",
" ------------- \n" },

{ " ------------- \n",
"|AH           |\n",
"|   -------   |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |   H   |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|   -------   |\n",
"|           HA|\n",
" ------------- \n" },

{ " ------------- \n",
"|2H           |\n",
"|   -------   |\n",
"|  |       |  |\n",
"|  |   H   |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |   H   |  |\n",
"|  |       |  |\n",
"|   -------   |\n",
"|           H2|\n",
" ------------- \n" },

{ " ------------- \n",
"|3H           |\n",
"|   -------   |\n",
"|  |       |  |\n",
"|  |   H   |  |\n",
"|  |       |  |\n",
"|  |   H   |  |\n",
"|  |       |  |\n",
"|  |   H   |  |\n",
"|  |       |  |\n",
"|   -------   |\n",
"|           H3|\n",
" ------------- \n" },


{ " ------------- \n",
"|4H           |\n",
"|   -------   |\n",
"|  |H     H|  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |H     H|  |\n",
"|   -------   |\n",
"|           H4|\n",
" ------------- \n" },

{ " ------------- \n",
"|5H           |\n",
"|   -------   |\n",
"|  |H     H|  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |   H   |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |H     H|  |\n",
"|   -------   |\n",
"|           H5|\n",
" ------------- \n" },


{ " ------------- \n",
"|6H           |\n",
"|   -------   |\n",
"|  |H     H|  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |H     H|  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |H     H|  |\n",
"|   -------   |\n",
"|           H6|\n",
" ------------- \n" },

{ " ------------- \n",
"|7H           |\n",
"|   -------   |\n",
"|  |H     H|  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |H  H  H|  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |H     H|  |\n",
"|   -------   |\n",
"|           H7|\n",
" ------------- \n" },

{ " ------------- \n",
"|8H           |\n",
"|   -------   |\n",
"|  |H     H|  |\n",
"|  |   H   |  |\n",
"|  |       |  |\n",
"|  |H     H|  |\n",
"|  |       |  |\n",
"|  |   H   |  |\n",
"|  |H     H|  |\n",
"|   -------   |\n",
"|           H8|\n",
" ------------- \n" },

{ " ------------- \n",
"|9H           |\n",
"|   -------   |\n",
"|  |H     H|  |\n",
"|  |       |  |\n",
"|  |H     H|  |\n",
"|  |   H   |  |\n",
"|  |H     H|  |\n",
"|  |       |  |\n",
"|  |H     H|  |\n",
"|   -------   |\n",
"|           H9|\n",
" ------------- \n" },

{ " ------------- \n",
"|10H          |\n",
"|   -------   |\n",
"|  |H     H|  |\n",
"|  |   H   |  |\n",
"|  |H     H|  |\n",
"|  |       |  |\n",
"|  |H     H|  |\n",
"|  |   H   |  |\n",
"|  |H     H|  |\n",
"|   -------   |\n",
"|          H10|\n",
" ------------- \n" },

{ " ------------- \n",
"|JH           |\n",
"|   -------   |\n",
"|  |H      |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |   J   |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |      H|  |\n",
"|   -------   |\n",
"|           HJ|\n",
" ------------- \n" },

{ " ------------- \n",
"|QH           |\n",
"|   -------   |\n",
"|  |H      |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |   Q   |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |      H|  |\n",
"|   -------   |\n",
"|           HQ|\n",
" ------------- \n" },

{ " ------------- \n",
"|KH           |\n",
"|   -------   |\n",
"|  |H      |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |   K   |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |      H|  |\n",
"|   -------   |\n",
"|           HK|\n",
" ------------- \n" },

{ " ------------- \n",
"|AS           |\n",
"|   -------   |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |   S   |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|   -------   |\n",
"|           SA|\n",
" ------------- \n" },

{ " ------------- \n",
"|2S           |\n",
"|   -------   |\n",
"|  |       |  |\n",
"|  |   S   |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |   S   |  |\n",
"|  |       |  |\n",
"|   -------   |\n",
"|           S2|\n",
" ------------- \n" },

{ " ------------- \n",
"|3S           |\n",
"|   -------   |\n",
"|  |       |  |\n",
"|  |   S   |  |\n",
"|  |       |  |\n",
"|  |   S   |  |\n",
"|  |       |  |\n",
"|  |   S   |  |\n",
"|  |       |  |\n",
"|   -------   |\n",
"|           S3|\n",
" ------------- \n" },


{ " ------------- \n",
"|4S           |\n",
"|   -------   |\n",
"|  |S     S|  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |S     S|  |\n",
"|   -------   |\n",
"|           S4|\n",
" ------------- \n" },

{ " ------------- \n",
"|5S           |\n",
"|   -------   |\n",
"|  |S     S|  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |   S   |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |S     S|  |\n",
"|   -------   |\n",
"|           S5|\n",
" ------------- \n" },


{ " ------------- \n",
"|6S           |\n",
"|   -------   |\n",
"|  |S     S|  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |S     S|  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |S     S|  |\n",
"|   -------   |\n",
"|           S6|\n",
" ------------- \n" },

{ " ------------- \n",
"|7S           |\n",
"|   -------   |\n",
"|  |S     S|  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |S  S  S|  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |S     S|  |\n",
"|   -------   |\n",
"|           S7|\n",
" ------------- \n" },

{ " ------------- \n",
"|8S           |\n",
"|   -------   |\n",
"|  |S     S|  |\n",
"|  |   S   |  |\n",
"|  |       |  |\n",
"|  |S     S|  |\n",
"|  |       |  |\n",
"|  |   S   |  |\n",
"|  |S     S|  |\n",
"|   -------   |\n",
"|           S8|\n",
" ------------- \n" },

{ " ------------- \n",
"|9S           |\n",
"|   -------   |\n",
"|  |S     S|  |\n",
"|  |       |  |\n",
"|  |S     S|  |\n",
"|  |   S   |  |\n",
"|  |S     S|  |\n",
"|  |       |  |\n",
"|  |S     S|  |\n",
"|   -------   |\n",
"|           S9|\n",
" ------------- \n" },

{ " ------------- \n",
"|10S          |\n",
"|   -------   |\n",
"|  |S     S|  |\n",
"|  |   S   |  |\n",
"|  |S     S|  |\n",
"|  |       |  |\n",
"|  |S     S|  |\n",
"|  |   S   |  |\n",
"|  |S     S|  |\n",
"|   -------   |\n",
"|          S10|\n",
" ------------- \n" },

{ " ------------- \n",
"|JS           |\n",
"|   -------   |\n",
"|  |S      |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |   J   |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |      S|  |\n",
"|   -------   |\n",
"|           SJ|\n",
" ------------- \n" },

{ " ------------- \n",
"|QS           |\n",
"|   -------   |\n",
"|  |S      |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |   Q   |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |      S|  |\n",
"|   -------   |\n",
"|           SQ|\n",
" ------------- \n" },

{ " ------------- \n",
"|KS           |\n",
"|   -------   |\n",
"|  |S      |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |   K   |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |      S|  |\n",
"|   -------   |\n",
"|           SK|\n",
" ------------- \n" },

{ " ------------- \n",
"|AC           |\n",
"|   -------   |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |   C   |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|   -------   |\n",
"|           CA|\n",
" ------------- \n" },

{ " ------------- \n",
"|2C           |\n",
"|   -------   |\n",
"|  |       |  |\n",
"|  |   C   |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |   C   |  |\n",
"|  |       |  |\n",
"|   -------   |\n",
"|           C2|\n",
" ------------- \n" },

{ " ------------- \n",
"|3C           |\n",
"|   -------   |\n",
"|  |       |  |\n",
"|  |   C   |  |\n",
"|  |       |  |\n",
"|  |   C   |  |\n",
"|  |       |  |\n",
"|  |   C   |  |\n",
"|  |       |  |\n",
"|   -------   |\n",
"|           C3|\n",
" ------------- \n" },


{ " ------------- \n",
"|4C           |\n",
"|   -------   |\n",
"|  |C     C|  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |C     C|  |\n",
"|   -------   |\n",
"|           C4|\n",
" ------------- \n" },

{ " ------------- \n",
"|5C           |\n",
"|   -------   |\n",
"|  |C     C|  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |   C   |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |C     C|  |\n",
"|   -------   |\n",
"|           C5|\n",
" ------------- \n" },


{ " ------------- \n",
"|6C           |\n",
"|   -------   |\n",
"|  |C     C|  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |C     C|  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |C     C|  |\n",
"|   -------   |\n",
"|           C6|\n",
" ------------- \n" },

{ " ------------- \n",
"|7C           |\n",
"|   -------   |\n",
"|  |C     C|  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |C  C  C|  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |C     C|  |\n",
"|   -------   |\n",
"|           C7|\n",
" ------------- \n" },

{ " ------------- \n",
"|8C           |\n",
"|   -------   |\n",
"|  |C     C|  |\n",
"|  |   C   |  |\n",
"|  |       |  |\n",
"|  |C     C|  |\n",
"|  |       |  |\n",
"|  |   C   |  |\n",
"|  |C     C|  |\n",
"|   -------   |\n",
"|           C8|\n",
" ------------- \n" },

{ " ------------- \n",
"|9C           |\n",
"|   -------   |\n",
"|  |C     C|  |\n",
"|  |       |  |\n",
"|  |C     C|  |\n",
"|  |   C   |  |\n",
"|  |C     C|  |\n",
"|  |       |  |\n",
"|  |C     C|  |\n",
"|   -------   |\n",
"|           C9|\n",
" ------------- \n" },

{ " ------------- \n",
"|10C          |\n",
"|   -------   |\n",
"|  |C     C|  |\n",
"|  |   C   |  |\n",
"|  |C     C|  |\n",
"|  |       |  |\n",
"|  |C     C|  |\n",
"|  |   C   |  |\n",
"|  |C     C|  |\n",
"|   -------   |\n",
"|          C10|\n",
" ------------- \n" },

{ " ------------- \n",
"|JC           |\n",
"|   -------   |\n",
"|  |C      |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |   J   |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |      C|  |\n",
"|   -------   |\n",
"|           CJ|\n",
" ------------- \n" },

{ " ------------- \n",
"|QC           |\n",
"|   -------   |\n",
"|  |C      |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |   Q   |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |      C|  |\n",
"|   -------   |\n",
"|           CQ|\n",
" ------------- \n" },

{ " ------------- \n",
"|KC           |\n",
"|   -------   |\n",
"|  |C      |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |   K   |  |\n",
"|  |       |  |\n",
"|  |       |  |\n",
"|  |      C|  |\n",
"|   -------   |\n",
"|           CK|\n",
" ------------- \n" },
};