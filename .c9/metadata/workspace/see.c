{"filter":false,"title":"see.c","tooltip":"/see.c","undoManager":{"mark":100,"position":100,"stack":[[{"start":{"row":65,"column":12},"end":{"row":65,"column":16},"action":"insert","lines":["    "],"id":34}],[{"start":{"row":66,"column":12},"end":{"row":66,"column":16},"action":"insert","lines":["    "],"id":35}],[{"start":{"row":67,"column":8},"end":{"row":67,"column":12},"action":"insert","lines":["    "],"id":36}],[{"start":{"row":68,"column":4},"end":{"row":68,"column":8},"action":"insert","lines":["    "],"id":37}],[{"start":{"row":45,"column":8},"end":{"row":45,"column":41},"action":"remove","lines":["//check if character is alphabeth"],"id":38},{"start":{"row":45,"column":4},"end":{"row":45,"column":8},"action":"remove","lines":["    "]},{"start":{"row":45,"column":0},"end":{"row":45,"column":4},"action":"remove","lines":["    "]},{"start":{"row":44,"column":14},"end":{"row":45,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":67,"column":8},"end":{"row":67,"column":9},"action":"remove","lines":["}"],"id":40}],[{"start":{"row":67,"column":0},"end":{"row":67,"column":8},"action":"remove","lines":["        "],"id":41}],[{"start":{"row":69,"column":1},"end":{"row":70,"column":0},"action":"insert","lines":["",""],"id":42},{"start":{"row":70,"column":0},"end":{"row":70,"column":1},"action":"insert","lines":["}"]}],[{"start":{"row":67,"column":0},"end":{"row":67,"column":4},"action":"insert","lines":["    "],"id":43}],[{"start":{"row":67,"column":4},"end":{"row":67,"column":8},"action":"insert","lines":["    "],"id":44}],[{"start":{"row":67,"column":8},"end":{"row":67,"column":12},"action":"insert","lines":["    "],"id":45}],[{"start":{"row":67,"column":12},"end":{"row":67,"column":13},"action":"insert","lines":["}"],"id":46},{"start":{"row":67,"column":0},"end":{"row":67,"column":12},"action":"remove","lines":["            "]},{"start":{"row":67,"column":0},"end":{"row":67,"column":8},"action":"insert","lines":["        "]}],[{"start":{"row":70,"column":0},"end":{"row":70,"column":1},"action":"remove","lines":["}"],"id":47},{"start":{"row":69,"column":1},"end":{"row":70,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":0,"column":0},"end":{"row":69,"column":1},"action":"remove","lines":["#include <cs50.h>","#include <stdio.h>","#include <string.h>","#include <stdlib.h>","#include <ctype.h>","","//get key from the command line","int main(int keyc, string keyv[2])","{","","    //validate the command line argument is not more or less than 2 input and is","    while (keyc > 2 || keyc < 2)","    {","        return 1;","    }","","    //iterate over each keyv character for alphabeth validation","    string keys = keyv[1];","    int keylen = strlen(keys);","    int keyi[keylen];","    for (int j = 0; j < keylen; j++)","    {","        if (isalpha(keys[j]))","        {","            if(isupper(keys[j]))","            {","                keyi[j] = keys[j] - 65;","            }","            else","            {","                keyi[j] = keys[j] - 97;","            }","        }","        else","        {","            return 1;","        }","    }","    string text = get_string(\"Your Plain Text: \");","    int num = strlen(text);","","    //iterate through each character of the plain text","    printf(\"ciphertext: \");","        int i;","        int j;","        if (isalpha(text[i]))","        {","        for (i = 0, j = 0; i < num; i++, j++)","            {","                if (isupper(text[i]))","                {","                    //convert to cipher if character is in uppercase","                    int c = ((text[i] - 65) + keyi[j%keylen]) % 26;","                    printf(\"%c\", c + 65);","                }","                else","                {","                    //convert to cipher if character is in lowercase","                    int c = ((text[i] - 97) + keyi[j%keylen]) % 26;","                    printf(\"%c\", c + 97);","                }","            }","            else","            {","                //print character if not uppercase or lowercase","                printf(\"%c\", text[i]);","            }","        }","    printf(\"\\n\");","}"],"id":48}],[{"start":{"row":0,"column":0},"end":{"row":1,"column":14},"action":"insert","lines":["        int i;","        int j;"],"id":49}],[{"start":{"row":1,"column":13},"end":{"row":1,"column":14},"action":"remove","lines":[";"],"id":50},{"start":{"row":1,"column":12},"end":{"row":1,"column":13},"action":"remove","lines":["j"]},{"start":{"row":1,"column":11},"end":{"row":1,"column":12},"action":"remove","lines":[" "]},{"start":{"row":1,"column":10},"end":{"row":1,"column":11},"action":"remove","lines":["t"]},{"start":{"row":1,"column":9},"end":{"row":1,"column":10},"action":"remove","lines":["n"]},{"start":{"row":1,"column":8},"end":{"row":1,"column":9},"action":"remove","lines":["i"]},{"start":{"row":1,"column":4},"end":{"row":1,"column":8},"action":"remove","lines":["    "]},{"start":{"row":1,"column":0},"end":{"row":1,"column":4},"action":"remove","lines":["    "]},{"start":{"row":0,"column":14},"end":{"row":1,"column":0},"action":"remove","lines":["",""]},{"start":{"row":0,"column":13},"end":{"row":0,"column":14},"action":"remove","lines":[";"]},{"start":{"row":0,"column":12},"end":{"row":0,"column":13},"action":"remove","lines":["i"]},{"start":{"row":0,"column":11},"end":{"row":0,"column":12},"action":"remove","lines":[" "]},{"start":{"row":0,"column":10},"end":{"row":0,"column":11},"action":"remove","lines":["t"]},{"start":{"row":0,"column":9},"end":{"row":0,"column":10},"action":"remove","lines":["n"]},{"start":{"row":0,"column":8},"end":{"row":0,"column":9},"action":"remove","lines":["i"]}],[{"start":{"row":0,"column":4},"end":{"row":0,"column":8},"action":"remove","lines":["    "],"id":51},{"start":{"row":0,"column":0},"end":{"row":0,"column":4},"action":"remove","lines":["    "]},{"start":{"row":0,"column":0},"end":{"row":72,"column":1},"action":"insert","lines":["#include <cs50.h>","#include <stdio.h>","#include <string.h>","#include <stdlib.h>","#include <ctype.h>","","//get key from the command line","int main(int keyc, string keyv[2])","{","","    //validate the command line argument is not more or less than 2 input and is","    while (keyc > 2 || keyc < 2)","    {","        return 1;","    }","","    //iterate over each keyv character for alphabeth validation","    string keys = keyv[1];","    int keylen = strlen(keys);","    int keyi[keylen];","    for (int j = 0; j < keylen; j++)","    {","        if (isalpha(keys[j]))","        {","            if(isupper(keys[j]))","            {","                keyi[j] = keys[j] - 65;","            }","            else","            {","                keyi[j] = keys[j] - 97;","            }","        }","        else","        {","            return 1;","        }","    }","","    string text = get_string(\"Your Plain Text: \");","    int num = strlen(text);","","    //iterate through each character of the plain text","    printf(\"ciphertext: \");","    int i;","    int j;","     for (i = 0, j = 0; i < num; i++, j++)","    {","        //check if character is alphabeth","        if (isalpha(text[i]))","        {","            //check if character is in uppercase","            if (isupper(text[i]))","            {","                //convert to cipher if character is in uppercase","                int c = ((text[i] - 65) + keyi[j%keylen]) % 26;","                printf(\"%c\", c + 65);","            }","            else","            {","                //convert to cipher if character is in lowercase","                int c = ((text[i] - 97) + keyi[j%keylen]) % 26;","                printf(\"%c\", c + 97);","            }","        }","        else","        {","            //print character if not uppercase or lowercase","            printf(\"%c\", text[i]);","        }","    }","    printf(\"\\n\");","}"]}],[{"start":{"row":49,"column":0},"end":{"row":50,"column":9},"action":"remove","lines":["        if (isalpha(text[i]))","        {"],"id":52}],[{"start":{"row":45,"column":10},"end":{"row":46,"column":0},"action":"insert","lines":["",""],"id":53},{"start":{"row":46,"column":0},"end":{"row":46,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":46,"column":0},"end":{"row":46,"column":4},"action":"remove","lines":["    "],"id":54},{"start":{"row":45,"column":10},"end":{"row":46,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":43,"column":27},"end":{"row":44,"column":0},"action":"insert","lines":["",""],"id":55},{"start":{"row":44,"column":0},"end":{"row":44,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":46,"column":10},"end":{"row":47,"column":0},"action":"insert","lines":["",""],"id":57},{"start":{"row":47,"column":0},"end":{"row":47,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":47,"column":4},"end":{"row":48,"column":9},"action":"insert","lines":["        if (isalpha(text[i]))","        {"],"id":58}],[{"start":{"row":44,"column":0},"end":{"row":44,"column":4},"action":"remove","lines":["    "],"id":59}],[{"start":{"row":66,"column":9},"end":{"row":67,"column":0},"action":"insert","lines":["",""],"id":60},{"start":{"row":67,"column":0},"end":{"row":67,"column":8},"action":"insert","lines":["        "]},{"start":{"row":67,"column":8},"end":{"row":67,"column":9},"action":"insert","lines":["e"]},{"start":{"row":67,"column":9},"end":{"row":67,"column":10},"action":"insert","lines":["l"]},{"start":{"row":67,"column":10},"end":{"row":67,"column":11},"action":"insert","lines":["s"]},{"start":{"row":67,"column":11},"end":{"row":67,"column":12},"action":"insert","lines":["e"]}],[{"start":{"row":67,"column":12},"end":{"row":67,"column":13},"action":"insert","lines":["{"],"id":61},{"start":{"row":67,"column":13},"end":{"row":67,"column":14},"action":"insert","lines":["}"]}],[{"start":{"row":67,"column":0},"end":{"row":67,"column":14},"action":"remove","lines":["        else{}"],"id":62},{"start":{"row":66,"column":9},"end":{"row":67,"column":0},"action":"remove","lines":["",""]}],[{"start":{"row":67,"column":12},"end":{"row":67,"column":13},"action":"insert","lines":[" "],"id":63},{"start":{"row":67,"column":13},"end":{"row":67,"column":14},"action":"insert","lines":["i"]},{"start":{"row":67,"column":14},"end":{"row":67,"column":15},"action":"insert","lines":["f"]}],[{"start":{"row":67,"column":15},"end":{"row":67,"column":16},"action":"insert","lines":[" "],"id":64}],[{"start":{"row":67,"column":16},"end":{"row":67,"column":18},"action":"insert","lines":["()"],"id":65}],[{"start":{"row":67,"column":17},"end":{"row":67,"column":33},"action":"insert","lines":["isalpha(text[i])"],"id":66}],[{"start":{"row":67,"column":17},"end":{"row":67,"column":24},"action":"remove","lines":["isalpha"],"id":67},{"start":{"row":67,"column":17},"end":{"row":67,"column":24},"action":"insert","lines":["isalnum"]}],[{"start":{"row":67,"column":7},"end":{"row":67,"column":8},"action":"insert","lines":["/"],"id":68},{"start":{"row":67,"column":8},"end":{"row":67,"column":9},"action":"insert","lines":["/"]}],[{"start":{"row":0,"column":0},"end":{"row":74,"column":1},"action":"remove","lines":["#include <cs50.h>","#include <stdio.h>","#include <string.h>","#include <stdlib.h>","#include <ctype.h>","","//get key from the command line","int main(int keyc, string keyv[2])","{","","    //validate the command line argument is not more or less than 2 input and is","    while (keyc > 2 || keyc < 2)","    {","        return 1;","    }","","    //iterate over each keyv character for alphabeth validation","    string keys = keyv[1];","    int keylen = strlen(keys);","    int keyi[keylen];","    for (int j = 0; j < keylen; j++)","    {","        if (isalpha(keys[j]))","        {","            if(isupper(keys[j]))","            {","                keyi[j] = keys[j] - 65;","            }","            else","            {","                keyi[j] = keys[j] - 97;","            }","        }","        else","        {","            return 1;","        }","    }","","    string text = get_string(\"Your Plain Text: \");","    int num = strlen(text);","","    //iterate through each character of the plain text","    printf(\"ciphertext: \");","","    int i;","    int j;","            if (isalpha(text[i]))","        {","     for (i = 0, j = 0; i < num; i++, j++)","    {","        //check if character is alphabeth","","            //check if character is in uppercase","            if (isupper(text[i]))","            {","                //convert to cipher if character is in uppercase","                int c = ((text[i] - 65) + keyi[j%keylen]) % 26;","                printf(\"%c\", c + 65);","            }","            else","            {","                //convert to cipher if character is in lowercase","                int c = ((text[i] - 97) + keyi[j%keylen]) % 26;","                printf(\"%c\", c + 97);","            }","        }","       // else if (isalnum(text[i]))","        {","            //print character if not uppercase or lowercase","            printf(\"%c\", text[i]);","        }","    }","    printf(\"\\n\");","}"],"id":69}],[{"start":{"row":0,"column":0},"end":{"row":72,"column":1},"action":"insert","lines":["#include <cs50.h>","#include <stdio.h>","#include <string.h>","#include <stdlib.h>","#include <ctype.h>","","//get key from the command line","int main(int keyc, string keyv[2])","{","","    //validate the command line argument is not more or less than 2 input and is","    while (keyc > 2 || keyc < 2)","    {","        return 1;","    }","","    //iterate over each keyv character for alphabeth validation","    string keys = keyv[1];","    int keylen = strlen(keys);","    int keyi[keylen];","    for (int j = 0; j < keylen; j++)","    {","        if (isalpha(keys[j]))","        {","            if(isupper(keys[j]))","            {","                keyi[j] = keys[j] - 65;","            }","            else","            {","                keyi[j] = keys[j] - 97;","            }","        }","        else","        {","            return 1;","        }","    }","","    string text = get_string(\"Your Plain Text: \");","    int num = strlen(text);","","    //iterate through each character of the plain text","    printf(\"ciphertext: \");","    int i;","    int j;","     for (i = 0, j = 0; i < num; i++, j++)","    {","        //check if character is alphabeth","        if (isalpha(text[i]))","        {","            //check if character is in uppercase","            if (isupper(text[i]))","            {","                //convert to cipher if character is in uppercase","                int c = ((text[i] - 65) + keyi[j%keylen]) % 26;","                printf(\"%c\", c + 65);","            }","            else","            {","                //convert to cipher if character is in lowercase","                int c = ((text[i] - 97) + keyi[j%keylen]) % 26;","                printf(\"%c\", c + 97);","            }","        }","        else","        {","            //print character if not uppercase or lowercase","            printf(\"%c\", text[i]);","        }","    }","    printf(\"\\n\");","}"],"id":70}],[{"start":{"row":70,"column":4},"end":{"row":70,"column":5},"action":"remove","lines":["}"],"id":71}],[{"start":{"row":64,"column":9},"end":{"row":65,"column":0},"action":"insert","lines":["",""],"id":72},{"start":{"row":65,"column":0},"end":{"row":65,"column":8},"action":"insert","lines":["        "]}],[{"start":{"row":65,"column":8},"end":{"row":65,"column":9},"action":"insert","lines":["}"],"id":73},{"start":{"row":65,"column":0},"end":{"row":65,"column":8},"action":"remove","lines":["        "]},{"start":{"row":65,"column":0},"end":{"row":65,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":46,"column":3},"end":{"row":47,"column":5},"action":"remove","lines":["  for (i = 0, j = 0; i < num; i++, j++)","    {"],"id":74}],[{"start":{"row":49,"column":9},"end":{"row":50,"column":0},"action":"insert","lines":["",""],"id":75},{"start":{"row":50,"column":0},"end":{"row":50,"column":12},"action":"insert","lines":["            "]}],[{"start":{"row":50,"column":12},"end":{"row":51,"column":5},"action":"insert","lines":["  for (i = 0, j = 0; i < num; i++, j++)","    {"],"id":76}],[{"start":{"row":46,"column":0},"end":{"row":46,"column":3},"action":"remove","lines":["   "],"id":77},{"start":{"row":72,"column":0},"end":{"row":72,"column":4},"action":"remove","lines":["    "]}],[{"start":{"row":44,"column":9},"end":{"row":44,"column":10},"action":"insert","lines":[" "],"id":78},{"start":{"row":44,"column":10},"end":{"row":44,"column":11},"action":"insert","lines":["="]}],[{"start":{"row":44,"column":11},"end":{"row":44,"column":12},"action":"insert","lines":[" "],"id":79},{"start":{"row":44,"column":12},"end":{"row":44,"column":13},"action":"insert","lines":["0"]}],[{"start":{"row":58,"column":13},"end":{"row":59,"column":0},"action":"insert","lines":["",""],"id":80},{"start":{"row":59,"column":0},"end":{"row":59,"column":12},"action":"insert","lines":["            "]}],[{"start":{"row":59,"column":0},"end":{"row":64,"column":13},"action":"insert","lines":["            else","            {","                //convert to cipher if character is in lowercase","                int c = ((text[i] - 97) + keyi[j%keylen]) % 26;","                printf(\"%c\", c + 97);","            }"],"id":82}],[{"start":{"row":59,"column":16},"end":{"row":59,"column":17},"action":"insert","lines":[" "],"id":83},{"start":{"row":59,"column":17},"end":{"row":59,"column":18},"action":"insert","lines":["i"]},{"start":{"row":59,"column":18},"end":{"row":59,"column":19},"action":"insert","lines":["f"]}],[{"start":{"row":59,"column":19},"end":{"row":59,"column":20},"action":"insert","lines":[" "],"id":84}],[{"start":{"row":59,"column":20},"end":{"row":59,"column":22},"action":"insert","lines":["()"],"id":85}],[{"start":{"row":59,"column":21},"end":{"row":59,"column":28},"action":"insert","lines":["text[i]"],"id":86}],[{"start":{"row":59,"column":0},"end":{"row":64,"column":15},"action":"remove","lines":["            else if (text[i])","            {","                //convert to cipher if character is in lowercase","                int c = ((text[i] - 97) + keyi[j%keylen]) % 26;","                printf(\"%c\", c + 97);","            }  "],"id":87}],[{"start":{"row":58,"column":13},"end":{"row":59,"column":10},"action":"remove","lines":["","          "],"id":88}],[{"start":{"row":0,"column":0},"end":{"row":74,"column":1},"action":"remove","lines":["#include <cs50.h>","#include <stdio.h>","#include <string.h>","#include <stdlib.h>","#include <ctype.h>","","//get key from the command line","int main(int keyc, string keyv[2])","{","","    //validate the command line argument is not more or less than 2 input and is","    while (keyc > 2 || keyc < 2)","    {","        return 1;","    }","","    //iterate over each keyv character for alphabeth validation","    string keys = keyv[1];","    int keylen = strlen(keys);","    int keyi[keylen];","    for (int j = 0; j < keylen; j++)","    {","        if (isalpha(keys[j]))","        {","            if(isupper(keys[j]))","            {","                keyi[j] = keys[j] - 65;","            }","            else","            {","                keyi[j] = keys[j] - 97;","            }","        }","        else","        {","            return 1;","        }","    }","","    string text = get_string(\"Your Plain Text: \");","    int num = strlen(text);","","    //iterate through each character of the plain text","    printf(\"ciphertext: \");","    int i = 0;","    int j;","","        //check if character is alphabeth","        if (isalpha(text[i]))","        {","              for (i = 0, j = 0; i < num; i++, j++)","    {","            //check if character is in uppercase","            if (isupper(text[i]))","            {","                //convert to cipher if character is in uppercase","                int c = ((text[i] - 65) + keyi[j%keylen]) % 26;","                printf(\"%c\", c + 65);","            }","            else","            {","                //convert to cipher if character is in lowercase","                int c = ((text[i] - 97) + keyi[j%keylen]) % 26;","                printf(\"%c\", c + 97);","            }","        }","    }","        else","        {","            //print character if not uppercase or lowercase","            printf(\"%c\", text[i]);","        }","","    printf(\"\\n\");","}"],"id":91},{"start":{"row":0,"column":0},"end":{"row":72,"column":1},"action":"insert","lines":["#include <cs50.h>","#include <stdio.h>","#include <string.h>","#include <stdlib.h>","#include <ctype.h>","","//get key from the command line","int main(int keyc, string keyv[2])","{","","    //validate the command line argument is not more or less than 2 input and is","    while (keyc > 2 || keyc < 2)","    {","        return 1;","    }","","    //iterate over each keyv character for alphabeth validation","    string keys = keyv[1];","    int keylen = strlen(keys);","    int keyi[keylen];","    for (int j = 0; j < keylen; j++)","    {","        if (isalpha(keys[j]))","        {","            if(isupper(keys[j]))","            {","                keyi[j] = keys[j] - 65;","            }","            else","            {","                keyi[j] = keys[j] - 97;","            }","        }","        else","        {","            return 1;","        }","    }","","    string text = get_string(\"Your Plain Text: \");","    int num = strlen(text);","","    //iterate through each character of the plain text","    printf(\"ciphertext: \");","    int i;","    int j;","     for (i = 0, j = 0; i < num; i++, j++)","    {","        //check if character is alphabeth","        if (isalpha(text[i]))","        {","            //check if character is in uppercase","            if (isupper(text[i]))","            {","                //convert to cipher if character is in uppercase","                int c = ((text[i] - 65) + keyi[j%keylen]) % 26;","                printf(\"%c\", c + 65);","            }","            else if (islower(text[i]))","            {","                //convert to cipher if character is in lowercase","                int c = ((text[i] - 97) + keyi[j%keylen]) % 26;","                printf(\"%c\", c + 97);","            }","        }","        else","        {","            //print character if not uppercase or lowercase","            printf(\"%c\", text[i]);","        }","    }","    printf(\"\\n\");","}"]}],[{"start":{"row":58,"column":21},"end":{"row":58,"column":37},"action":"remove","lines":["islower(text[i])"],"id":95},{"start":{"row":58,"column":21},"end":{"row":58,"column":48},"action":"insert","lines":["name[i]>=97 && name[i]<=122"]}],[{"start":{"row":58,"column":21},"end":{"row":58,"column":25},"action":"remove","lines":["name"],"id":96},{"start":{"row":58,"column":21},"end":{"row":58,"column":22},"action":"insert","lines":["t"]},{"start":{"row":58,"column":22},"end":{"row":58,"column":23},"action":"insert","lines":["e"]},{"start":{"row":58,"column":23},"end":{"row":58,"column":24},"action":"insert","lines":["x"]},{"start":{"row":58,"column":24},"end":{"row":58,"column":25},"action":"insert","lines":["t"]}],[{"start":{"row":58,"column":36},"end":{"row":58,"column":40},"action":"remove","lines":["name"],"id":97},{"start":{"row":58,"column":36},"end":{"row":58,"column":37},"action":"insert","lines":["t"]},{"start":{"row":58,"column":37},"end":{"row":58,"column":38},"action":"insert","lines":["e"]},{"start":{"row":58,"column":38},"end":{"row":58,"column":39},"action":"insert","lines":["x"]},{"start":{"row":58,"column":39},"end":{"row":58,"column":40},"action":"insert","lines":["t"]}],[{"start":{"row":52,"column":16},"end":{"row":52,"column":32},"action":"remove","lines":["isupper(text[i])"],"id":98},{"start":{"row":52,"column":16},"end":{"row":52,"column":42},"action":"insert","lines":["name[i]>=65 && name[i]<=90"]}],[{"start":{"row":52,"column":19},"end":{"row":52,"column":20},"action":"remove","lines":["e"],"id":99},{"start":{"row":52,"column":18},"end":{"row":52,"column":19},"action":"remove","lines":["m"]},{"start":{"row":52,"column":17},"end":{"row":52,"column":18},"action":"remove","lines":["a"]},{"start":{"row":52,"column":16},"end":{"row":52,"column":17},"action":"remove","lines":["n"]}],[{"start":{"row":52,"column":16},"end":{"row":52,"column":17},"action":"insert","lines":["t"],"id":100},{"start":{"row":52,"column":17},"end":{"row":52,"column":18},"action":"insert","lines":["e"]},{"start":{"row":52,"column":18},"end":{"row":52,"column":19},"action":"insert","lines":["x"]},{"start":{"row":52,"column":19},"end":{"row":52,"column":20},"action":"insert","lines":["t"]}],[{"start":{"row":52,"column":34},"end":{"row":52,"column":35},"action":"remove","lines":["e"],"id":101},{"start":{"row":52,"column":33},"end":{"row":52,"column":34},"action":"remove","lines":["m"]},{"start":{"row":52,"column":32},"end":{"row":52,"column":33},"action":"remove","lines":["a"]},{"start":{"row":52,"column":31},"end":{"row":52,"column":32},"action":"remove","lines":["n"]}],[{"start":{"row":52,"column":31},"end":{"row":52,"column":32},"action":"insert","lines":["t"],"id":102},{"start":{"row":52,"column":32},"end":{"row":52,"column":33},"action":"insert","lines":["e"]},{"start":{"row":52,"column":33},"end":{"row":52,"column":34},"action":"insert","lines":["x"]},{"start":{"row":52,"column":34},"end":{"row":52,"column":35},"action":"insert","lines":["t"]}],[{"start":{"row":49,"column":12},"end":{"row":49,"column":28},"action":"remove","lines":["isalpha(text[i])"],"id":103},{"start":{"row":49,"column":12},"end":{"row":49,"column":40},"action":"insert","lines":["(text[i]>=65 && text[i]<=90)"]}],[{"start":{"row":49,"column":40},"end":{"row":49,"column":41},"action":"insert","lines":[" "],"id":104},{"start":{"row":49,"column":41},"end":{"row":49,"column":42},"action":"insert","lines":["|"]},{"start":{"row":49,"column":42},"end":{"row":49,"column":43},"action":"insert","lines":["|"]}],[{"start":{"row":49,"column":43},"end":{"row":49,"column":44},"action":"insert","lines":[" "],"id":105}],[{"start":{"row":49,"column":43},"end":{"row":49,"column":44},"action":"insert","lines":[" "],"id":106}],[{"start":{"row":49,"column":44},"end":{"row":49,"column":73},"action":"insert","lines":["(text[i]>=97 && text[i]<=122)"],"id":107}],[{"start":{"row":49,"column":73},"end":{"row":49,"column":74},"action":"remove","lines":[" "],"id":108},{"start":{"row":50,"column":9},"end":{"row":51,"column":0},"action":"insert","lines":["",""]},{"start":{"row":51,"column":0},"end":{"row":51,"column":12},"action":"insert","lines":["            "]}],[{"start":{"row":51,"column":12},"end":{"row":52,"column":5},"action":"insert","lines":["for (i = 0, j = 0; i < num; i++, j++)","    {"],"id":109}],[{"start":{"row":46,"column":3},"end":{"row":46,"column":4},"action":"insert","lines":["/"],"id":110},{"start":{"row":46,"column":4},"end":{"row":46,"column":5},"action":"insert","lines":["/"]}],[{"start":{"row":47,"column":4},"end":{"row":47,"column":5},"action":"insert","lines":["/"],"id":111},{"start":{"row":47,"column":5},"end":{"row":47,"column":6},"action":"insert","lines":["/"]}],[{"start":{"row":67,"column":8},"end":{"row":67,"column":9},"action":"insert","lines":["/"],"id":112},{"start":{"row":67,"column":9},"end":{"row":67,"column":10},"action":"insert","lines":["/"]}],[{"start":{"row":67,"column":9},"end":{"row":67,"column":10},"action":"remove","lines":["/"],"id":113},{"start":{"row":67,"column":8},"end":{"row":67,"column":9},"action":"remove","lines":["/"]}],[{"start":{"row":72,"column":4},"end":{"row":72,"column":5},"action":"remove","lines":["}"],"id":114}],[{"start":{"row":66,"column":9},"end":{"row":67,"column":0},"action":"insert","lines":["",""],"id":115},{"start":{"row":67,"column":0},"end":{"row":67,"column":8},"action":"insert","lines":["        "]}],[{"start":{"row":67,"column":8},"end":{"row":67,"column":9},"action":"insert","lines":["}"],"id":116}],[{"start":{"row":73,"column":0},"end":{"row":73,"column":4},"action":"remove","lines":["    "],"id":117}],[{"start":{"row":44,"column":9},"end":{"row":44,"column":10},"action":"insert","lines":[" "],"id":118},{"start":{"row":44,"column":10},"end":{"row":44,"column":11},"action":"insert","lines":["="]}],[{"start":{"row":44,"column":11},"end":{"row":44,"column":12},"action":"insert","lines":[" "],"id":119},{"start":{"row":44,"column":12},"end":{"row":44,"column":13},"action":"insert","lines":["0"]}],[{"start":{"row":68,"column":12},"end":{"row":68,"column":13},"action":"insert","lines":[" "],"id":120},{"start":{"row":68,"column":13},"end":{"row":68,"column":14},"action":"insert","lines":["i"]},{"start":{"row":68,"column":14},"end":{"row":68,"column":15},"action":"insert","lines":["f"]}],[{"start":{"row":68,"column":15},"end":{"row":68,"column":16},"action":"insert","lines":[" "],"id":121}],[{"start":{"row":68,"column":16},"end":{"row":68,"column":18},"action":"insert","lines":["()"],"id":122}],[{"start":{"row":68,"column":17},"end":{"row":68,"column":18},"action":"insert","lines":["s"],"id":123},{"start":{"row":68,"column":18},"end":{"row":68,"column":19},"action":"insert","lines":["p"]},{"start":{"row":68,"column":19},"end":{"row":68,"column":20},"action":"insert","lines":["a"]}],[{"start":{"row":68,"column":19},"end":{"row":68,"column":20},"action":"remove","lines":["a"],"id":124},{"start":{"row":68,"column":18},"end":{"row":68,"column":19},"action":"remove","lines":["p"]},{"start":{"row":68,"column":17},"end":{"row":68,"column":18},"action":"remove","lines":["s"]}],[{"start":{"row":68,"column":17},"end":{"row":68,"column":18},"action":"insert","lines":["t"],"id":125},{"start":{"row":68,"column":18},"end":{"row":68,"column":19},"action":"insert","lines":["e"]},{"start":{"row":68,"column":19},"end":{"row":68,"column":20},"action":"insert","lines":["x"]},{"start":{"row":68,"column":20},"end":{"row":68,"column":21},"action":"insert","lines":["t"]}],[{"start":{"row":68,"column":21},"end":{"row":68,"column":23},"action":"insert","lines":["{}"],"id":126}],[{"start":{"row":68,"column":21},"end":{"row":68,"column":23},"action":"remove","lines":["{}"],"id":127}],[{"start":{"row":68,"column":21},"end":{"row":68,"column":23},"action":"insert","lines":["[]"],"id":128}],[{"start":{"row":68,"column":22},"end":{"row":68,"column":23},"action":"insert","lines":["i"],"id":129}],[{"start":{"row":68,"column":24},"end":{"row":68,"column":25},"action":"insert","lines":[" "],"id":130},{"start":{"row":68,"column":25},"end":{"row":68,"column":26},"action":"insert","lines":["="]}],[{"start":{"row":68,"column":26},"end":{"row":68,"column":27},"action":"insert","lines":[" "],"id":131}],[{"start":{"row":68,"column":27},"end":{"row":68,"column":28},"action":"insert","lines":["3"],"id":132},{"start":{"row":68,"column":28},"end":{"row":68,"column":29},"action":"insert","lines":["2"]}],[{"start":{"row":72,"column":9},"end":{"row":73,"column":0},"action":"insert","lines":["",""],"id":133},{"start":{"row":73,"column":0},"end":{"row":73,"column":8},"action":"insert","lines":["        "]},{"start":{"row":73,"column":8},"end":{"row":73,"column":9},"action":"insert","lines":["e"]},{"start":{"row":73,"column":9},"end":{"row":73,"column":10},"action":"insert","lines":["l"]},{"start":{"row":73,"column":10},"end":{"row":73,"column":11},"action":"insert","lines":["s"]},{"start":{"row":73,"column":11},"end":{"row":73,"column":12},"action":"insert","lines":["e"]}],[{"start":{"row":73,"column":12},"end":{"row":74,"column":0},"action":"insert","lines":["",""],"id":134},{"start":{"row":74,"column":0},"end":{"row":74,"column":8},"action":"insert","lines":["        "]},{"start":{"row":74,"column":8},"end":{"row":74,"column":9},"action":"insert","lines":["{"]}],[{"start":{"row":74,"column":9},"end":{"row":76,"column":9},"action":"insert","lines":["","            ","        }"],"id":135}],[{"start":{"row":75,"column":0},"end":{"row":76,"column":34},"action":"insert","lines":["            //print character if not uppercase or lowercase","            printf(\"%c\", text[i]);"],"id":136}],[{"start":{"row":76,"column":34},"end":{"row":76,"column":46},"action":"remove","lines":["            "],"id":137}],[{"start":{"row":68,"column":25},"end":{"row":68,"column":26},"action":"insert","lines":["="],"id":138}],[{"start":{"row":71,"column":25},"end":{"row":71,"column":32},"action":"remove","lines":["text[i]"],"id":139},{"start":{"row":71,"column":25},"end":{"row":71,"column":26},"action":"insert","lines":["3"]},{"start":{"row":71,"column":26},"end":{"row":71,"column":27},"action":"insert","lines":["2"]}],[{"start":{"row":71,"column":20},"end":{"row":71,"column":22},"action":"remove","lines":["%c"],"id":140},{"start":{"row":71,"column":20},"end":{"row":71,"column":21},"action":"insert","lines":[" "]}],[{"start":{"row":71,"column":22},"end":{"row":71,"column":26},"action":"remove","lines":[", 32"],"id":141}],[{"start":{"row":78,"column":0},"end":{"row":82,"column":15},"action":"insert","lines":["         if (text[i] == 32)","        {","            //print character if not uppercase or lowercase","            printf(\" \");","        }else{}"],"id":142}]]},"ace":{"folds":[],"scrolltop":966.4453125,"scrollleft":0,"selection":{"start":{"row":82,"column":15},"end":{"row":82,"column":15},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1534247953899,"hash":"f04c0e483c5b3531a51deeec27fb6f57231bd3db"}