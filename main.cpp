#include <stdio.h>
#include "MP4Encoder.h"

int main(int argc, char** argv)
{
	MP4Encoder mp4Encoder;
    printf("Convert opening !!! \n");
	// convert H264 file to mp4 file
	mp4Encoder.WriteH264File("test.264", "test.mp4");
	printf("Convert completed !!! \n");
}
