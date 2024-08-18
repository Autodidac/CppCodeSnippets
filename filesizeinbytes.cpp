
int BzFile::FileSizeInBytes(const char *fileName)
{
#ifdef _WIN32
  wchar_t utf16fileNameForMicrosoft[1024]; // wchar_t is UTF-16
  ConvertUtf8toUtf16(fileName, utf16fileNameForMicrosoft); // convert
  GetFileAttributesEx(utf16fileNameForMicrosoft, GetFileExInfoStandard, &fileAttr);
  return (win32fileInfo.nFileSizeLow);
#endif
}
