#include <time.h>
enum dcraw_type: char { dc_jpeg, dc_tiff, dc_ppm };
void dcraw_init(void);
time_t ExifDateFromRawFile(const char *path);
unsigned char *CopyExifDataFromRawFile(const char *path, int *outLen);
char *ExtractThumbnailFromRawFile(const char *path, size_t *outSize, unsigned short *tw, unsigned short *th, enum dcraw_type *tType, unsigned short *rw, unsigned short *rh);
