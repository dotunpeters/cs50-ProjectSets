{"filter":false,"title":"resize.c","tooltip":"~/workspace/2019/resize/resize.c","undoManager":{"mark":3,"position":3,"stack":[[{"start":{"row":0,"column":0},"end":{"row":123,"column":1},"action":"insert","lines":["#include <stdio.h>","#include <stdlib.h>","","#include \"bmp.h\"","","int main(int argc, char *argv[])","{","    // ensure proper usage","    if (argc != 4)","    {","        fprintf(stderr, \"Usage: ./resize int infile outfile\\n\");","        return 1;","    }","    ","    int n = atoi(argv[1]);","    ","    if (n < 0 || n > 100)","    {","        fprintf(stderr, \"Integer should be between 0 and 100\\n\");","        return 2;","    }","    ","     // remember filenames","    char *infile = argv[2];","    char *outfile = argv[3];","","    // open input file ","    FILE *inptr = fopen(infile, \"r\");","    if (inptr == NULL)","    {","        fprintf(stderr, \"Could not open %s.\\n\", infile);","        return 3;","    }","","    // open output file","    FILE *outptr = fopen(outfile, \"w\");","    if (outptr == NULL)","    {","        fclose(inptr);","        fprintf(stderr, \"Could not create %s.\\n\", outfile);","        return 4;","    }","","    // read infile's BITMAPFILEHEADER","    BITMAPFILEHEADER bf;","    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inptr);","","    // read infile's BITMAPINFOHEADER","    BITMAPINFOHEADER bi;","    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inptr);","","    // ensure infile is (likely) a 24-bit uncompressed BMP 4.0","    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 || ","        bi.biBitCount != 24 || bi.biCompression != 0)","    {","        fclose(outptr);","        fclose(inptr);","        fprintf(stderr, \"Unsupported file format.\\n\");","        return 5;","    }","","     // determine padding for scanlines","    int padding_infile =  (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;","    int padding_outfile =  (4 - ((bi.biWidth*n) * sizeof(RGBTRIPLE)) % 4) % 4;","    ","    int old_width = bi.biWidth;","    int old_height = bi.biHeight;","    ","    bi.biWidth = old_width*n;","    bi.biHeight = old_height*n;","    bi.biSizeImage = ((sizeof(RGBTRIPLE)*bi.biWidth)+padding_outfile)*abs(bi.biHeight);","    bf.bfSize = bi.biSizeImage + sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);","","    // write outfile's BITMAPFILEHEADER","    fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, outptr);","","    // write outfile's BITMAPINFOHEADER","    fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, outptr);","","    // iterate over infile's scanlines","    for (int i = 0, old_height_abs = abs(old_height); i < old_height_abs; i++)","    {","        for (int b = 0; b < n; b++)","        {","            fseek(inptr, (54 + ((old_width*3 + padding_infile) * i)), SEEK_SET);","            ","            // iterate over pixels in scanline","            for (int j = 0; j < old_width; j++)","            {","                // temporary storage","                RGBTRIPLE triple;","             ","                // read RGB triple from infile","                fread(&triple, sizeof(RGBTRIPLE), 1, inptr);","                    ","                for (int c = 0; c < n; c++)","                {","                    // write RGB triple to outfile","                    fwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);","                }","    ","            }    ","            ","            //skip over padding, if any","            fseek(inptr, padding_infile, SEEK_CUR);","","            // then add it back (to demonstrate how)","            for (int k = 0; k < padding_outfile; k++)","            {","                fputc(0x00, outptr);","            }","            ","        }      ","    }","","    // close infile","    fclose(inptr);","","    // close outfile","    fclose(outptr);","","    // success","    return 0;","}"],"id":1}],[{"start":{"row":13,"column":0},"end":{"row":13,"column":4},"action":"remove","lines":["    "],"id":2},{"start":{"row":15,"column":0},"end":{"row":15,"column":4},"action":"remove","lines":["    "]},{"start":{"row":21,"column":0},"end":{"row":21,"column":4},"action":"remove","lines":["    "]},{"start":{"row":26,"column":22},"end":{"row":26,"column":23},"action":"remove","lines":[" "]},{"start":{"row":52,"column":71},"end":{"row":52,"column":72},"action":"remove","lines":[" "]},{"start":{"row":64,"column":0},"end":{"row":64,"column":4},"action":"remove","lines":["    "]},{"start":{"row":67,"column":0},"end":{"row":67,"column":4},"action":"remove","lines":["    "]},{"start":{"row":85,"column":0},"end":{"row":85,"column":12},"action":"remove","lines":["            "]},{"start":{"row":91,"column":0},"end":{"row":91,"column":13},"action":"remove","lines":["             "]},{"start":{"row":94,"column":0},"end":{"row":94,"column":20},"action":"remove","lines":["                    "]},{"start":{"row":100,"column":0},"end":{"row":100,"column":4},"action":"remove","lines":["    "]},{"start":{"row":101,"column":13},"end":{"row":101,"column":17},"action":"remove","lines":["    "]},{"start":{"row":102,"column":0},"end":{"row":102,"column":12},"action":"remove","lines":["            "]},{"start":{"row":111,"column":0},"end":{"row":111,"column":12},"action":"remove","lines":["            "]},{"start":{"row":112,"column":9},"end":{"row":112,"column":15},"action":"remove","lines":["      "]}],[{"start":{"row":0,"column":0},"end":{"row":123,"column":1},"action":"remove","lines":["#include <stdio.h>","#include <stdlib.h>","","#include \"bmp.h\"","","int main(int argc, char *argv[])","{","    // ensure proper usage","    if (argc != 4)","    {","        fprintf(stderr, \"Usage: ./resize int infile outfile\\n\");","        return 1;","    }","","    int n = atoi(argv[1]);","","    if (n < 0 || n > 100)","    {","        fprintf(stderr, \"Integer should be between 0 and 100\\n\");","        return 2;","    }","","     // remember filenames","    char *infile = argv[2];","    char *outfile = argv[3];","","    // open input file","    FILE *inptr = fopen(infile, \"r\");","    if (inptr == NULL)","    {","        fprintf(stderr, \"Could not open %s.\\n\", infile);","        return 3;","    }","","    // open output file","    FILE *outptr = fopen(outfile, \"w\");","    if (outptr == NULL)","    {","        fclose(inptr);","        fprintf(stderr, \"Could not create %s.\\n\", outfile);","        return 4;","    }","","    // read infile's BITMAPFILEHEADER","    BITMAPFILEHEADER bf;","    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inptr);","","    // read infile's BITMAPINFOHEADER","    BITMAPINFOHEADER bi;","    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inptr);","","    // ensure infile is (likely) a 24-bit uncompressed BMP 4.0","    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 ||","        bi.biBitCount != 24 || bi.biCompression != 0)","    {","        fclose(outptr);","        fclose(inptr);","        fprintf(stderr, \"Unsupported file format.\\n\");","        return 5;","    }","","     // determine padding for scanlines","    int padding_infile =  (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;","    int padding_outfile =  (4 - ((bi.biWidth*n) * sizeof(RGBTRIPLE)) % 4) % 4;","","    int old_width = bi.biWidth;","    int old_height = bi.biHeight;","","    bi.biWidth = old_width*n;","    bi.biHeight = old_height*n;","    bi.biSizeImage = ((sizeof(RGBTRIPLE)*bi.biWidth)+padding_outfile)*abs(bi.biHeight);","    bf.bfSize = bi.biSizeImage + sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);","","    // write outfile's BITMAPFILEHEADER","    fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, outptr);","","    // write outfile's BITMAPINFOHEADER","    fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, outptr);","","    // iterate over infile's scanlines","    for (int i = 0, old_height_abs = abs(old_height); i < old_height_abs; i++)","    {","        for (int b = 0; b < n; b++)","        {","            fseek(inptr, (54 + ((old_width*3 + padding_infile) * i)), SEEK_SET);","","            // iterate over pixels in scanline","            for (int j = 0; j < old_width; j++)","            {","                // temporary storage","                RGBTRIPLE triple;","","                // read RGB triple from infile","                fread(&triple, sizeof(RGBTRIPLE), 1, inptr);","","                for (int c = 0; c < n; c++)","                {","                    // write RGB triple to outfile","                    fwrite(&triple, sizeof(RGBTRIPLE), 1, outptr);","                }","","            }","","            //skip over padding, if any","            fseek(inptr, padding_infile, SEEK_CUR);","","            // then add it back (to demonstrate how)","            for (int k = 0; k < padding_outfile; k++)","            {","                fputc(0x00, outptr);","            }","","        }","    }","","    // close infile","    fclose(inptr);","","    // close outfile","    fclose(outptr);","","    // success","    return 0;","}"],"id":3},{"start":{"row":0,"column":0},"end":{"row":160,"column":1},"action":"insert","lines":["#include <stdio.h>","#include <stdlib.h>","#include <math.h> ","#include \"bmp.h\"","","int main(int argc, char *argv[])","{","    // ensure proper usage","    if (argc != 4)","    {","        fprintf(stderr, \"Usage: ./resize f infile outfile\\n\");","        return 1;","    }","    ","    // convert string argument to float","    float f;","    sscanf(argv[1], \" %f\", &f);","    ","    //exit if f is invalid","    if(f > 100.0 || f < 0.0) {","        fprintf(stderr, \"Usage: ./resize f infile outfile\\n\");","        return 1;","    }","","    // remember filenames","    char *infile = argv[2];","    char *outfile = argv[3];","","    // open input file ","    FILE *inptr = fopen(infile, \"r\");","    if (inptr == NULL)","    {","        fprintf(stderr, \"Could not open %s.\\n\", infile);","        return 1;","    }","","    // open output file","    FILE *outptr = fopen(outfile, \"w\");","    if (outptr == NULL)","    {","        fclose(inptr);","        fprintf(stderr, \"Could not create %s.\\n\", outfile);","        return 1;","    }","","    // read infile's BITMAPFILEHEADER","    BITMAPFILEHEADER bf, bfOut;","    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inptr);","    bfOut = bf;","    ","    // read infile's BITMAPINFOHEADER","    BITMAPINFOHEADER bi, biOut;","    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inptr);","    biOut = bi;","","    // ensure infile is (likely) a 24-bit uncompressed BMP 4.0","    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 || ","        bi.biBitCount != 24 || bi.biCompression != 0)","    {","        fclose(outptr);","        fclose(inptr);","        fprintf(stderr, \"Unsupported file format.\\n\");","        return 4;","    }","    ","    // determine padding for inScanLines","    int padding = (4 - (bi.biWidth * sizeof(RGBTRIPLE)) % 4) % 4;","    ","    //update BITMAPINFOHEADER for new resized file","    biOut.biWidth = floor(bi.biWidth * f);","    //if bi.biHeight is positive, convert to nagative.","    biOut.biHeight = floor((bi.biHeight > 0? -bi.biHeight : bi.biHeight)* f); ","","    // determine padding for outScanLines","    int paddingOut = (4 - biOut.biWidth * sizeof(RGBTRIPLE) % 4) % 4;","    ","    // calculate output file image size header","    biOut.biSizeImage = ((sizeof(RGBTRIPLE) * biOut.biWidth) + paddingOut) * abs(biOut.biHeight);","    ","    //update BITMAPFILEHEADER for new resized file","    bfOut.bfSize = biOut.biSizeImage + sizeof(BITMAPFILEHEADER) + sizeof(BITMAPINFOHEADER);","    ","    // write outfile's BITMAPFILEHEADER","    fwrite(&bfOut, sizeof(BITMAPFILEHEADER), 1, outptr);","","    // write outfile's BITMAPINFOHEADER","    fwrite(&biOut, sizeof(BITMAPINFOHEADER), 1, outptr);","","    // read file into array (without padding) and also handle bottom-up DIB.","    int cols = abs(bi.biHeight);","","    int i, j, k, l, indJ, indI;","    RGBTRIPLE inScanLines[cols][bi.biWidth];","    if(bi.biHeight < 0) { ","        //top-down bmp","        for(i = 0; i < abs(bi.biHeight); i++) {","            for(j = 0; j < bi.biWidth; j++) {","                // read RGB triple from infile","                fread(&(inScanLines[i][j]), sizeof(RGBTRIPLE), 1, inptr);","            }","            // skip over padding, if any","            fseek(inptr, padding, SEEK_CUR);","        }","    } else {              ","        //bottom-up bmp","        for(i = bi.biHeight - 1; i >= 0; i--) {","            for(j = 0; j < bi.biWidth; j++) {","                // read RGB triple from infile","                fread(&(inScanLines[i][j]), sizeof(RGBTRIPLE), 1, inptr);","            }","            // skip over padding, if any","            fseek(inptr, padding, SEEK_CUR);","        }","    }","    ","    cols = abs(biOut.biHeight);","    RGBTRIPLE outScanLines[cols][biOut.biWidth];","    ","    // generate output file's scanline array, outScanLines","    for(i = 0; i < abs(bi.biHeight); i++) {","        indI = floor(i*f);","        for(j = 0; j < bi.biWidth; j++) {","            indJ = ceil(f*j);","            outScanLines[indI][indJ] = inScanLines[i][j];","            for(k = floor(f) - 1; k > 0; k--) {","                outScanLines[indI][indJ + k] = inScanLines[i][j];","            }","        }","        for(l = floor(f) - 1; l > 0; l--) {","            for(j = 0; j < bi.biWidth; j++) {","                indJ = ceil(f*j);","                outScanLines[indI + l][indJ] = inScanLines[i][j];","                for(k = floor(f) - 1; k > 0; k--) {","                    outScanLines[indI + l][indJ + k] = inScanLines[i][j];","                }","            }","        }","    }","    ","    // write outScanLines array to output file with padding","    for (i = 0; i < abs(biOut.biHeight); i++)","    {","        // iterate over pixels in scanline","        for (j = 0; j < biOut.biWidth; j++)","        {","            fwrite(&outScanLines[i][j], sizeof(RGBTRIPLE), 1, outptr);","        }","","        // padding","        for (k = 0; k < paddingOut; k++)","        {","            fputc(0x00, outptr);","        }","    }","    // cleanup","    fclose(inptr);","    fclose(outptr);","","    // success","    return 0;","}"]}],[{"start":{"row":2,"column":17},"end":{"row":2,"column":18},"action":"remove","lines":[" "],"id":4},{"start":{"row":13,"column":0},"end":{"row":13,"column":4},"action":"remove","lines":["    "]},{"start":{"row":17,"column":0},"end":{"row":17,"column":4},"action":"remove","lines":["    "]},{"start":{"row":28,"column":22},"end":{"row":28,"column":23},"action":"remove","lines":[" "]},{"start":{"row":49,"column":0},"end":{"row":49,"column":4},"action":"remove","lines":["    "]},{"start":{"row":56,"column":71},"end":{"row":56,"column":72},"action":"remove","lines":[" "]},{"start":{"row":64,"column":0},"end":{"row":64,"column":4},"action":"remove","lines":["    "]},{"start":{"row":67,"column":0},"end":{"row":67,"column":4},"action":"remove","lines":["    "]},{"start":{"row":71,"column":77},"end":{"row":71,"column":78},"action":"remove","lines":[" "]},{"start":{"row":75,"column":0},"end":{"row":75,"column":4},"action":"remove","lines":["    "]},{"start":{"row":78,"column":0},"end":{"row":78,"column":4},"action":"remove","lines":["    "]},{"start":{"row":81,"column":0},"end":{"row":81,"column":4},"action":"remove","lines":["    "]},{"start":{"row":93,"column":25},"end":{"row":93,"column":26},"action":"remove","lines":[" "]},{"start":{"row":103,"column":12},"end":{"row":103,"column":26},"action":"remove","lines":["              "]},{"start":{"row":114,"column":0},"end":{"row":114,"column":4},"action":"remove","lines":["    "]},{"start":{"row":117,"column":0},"end":{"row":117,"column":4},"action":"remove","lines":["    "]},{"start":{"row":138,"column":0},"end":{"row":138,"column":4},"action":"remove","lines":["    "]}]]},"ace":{"folds":[],"scrolltop":2134.1953125,"scrollleft":0,"selection":{"start":{"row":160,"column":1},"end":{"row":160,"column":1},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":147,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1556547821630,"hash":"8f865a13d1650b2b4fda315acaca45d2a2419499"}