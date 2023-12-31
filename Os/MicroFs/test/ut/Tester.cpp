
#include "Tester.hpp"
#include <stdio.h>
#include <gtest/gtest.h>
#include <Fw/Test/UnitTest.hpp>
#include <Fw/Types/MallocAllocator.hpp>


namespace Os {

  // ----------------------------------------------------------------------
  // Construction and destruction
  // ----------------------------------------------------------------------

  Tester ::
    Tester()
  {
  }

  Tester ::
    ~Tester()
  {

  }

  // ----------------------------------------------------------------------
  // Tests
  // ----------------------------------------------------------------------

  // ----------------------------------------------------------------------
  // InitTest
  // ----------------------------------------------------------------------
  void Tester ::
    InitTest()
  {
    clearFileBuffer();

    // Instantiate the Rules
    U32 numBins = 1;
    U32 fileSize = 100;
    U32 numFiles = 1;
    InitFileSystem initFileSystem(numBins, fileSize, numFiles);
    Cleanup cleanup;

    // Run the Rules
    initFileSystem.apply(*this);
    cleanup.apply(*this);


  }

  // ----------------------------------------------------------------------
  // OpenWriteReadTest
  // ----------------------------------------------------------------------
  void Tester ::
    OpenWriteReadTest()
  {
    clearFileBuffer();

    // Instantiate the Rules
    U32 numBins = 1;
    U32 fileSize = 100;
    U32 numFiles = 1;
    InitFileSystem initFileSystem(numBins, fileSize, numFiles);
    OpenFile openFile;
    ResetFile resetFile;
    Cleanup cleanup;
    WriteData writeData(fileSize, 0xFF);
    ReadData readData(fileSize);

    // Run the Rules
    initFileSystem.apply(*this);
    openFile.apply(*this);
    writeData.apply(*this);
    resetFile.apply(*this);
    readData.apply(*this);

    cleanup.apply(*this);
    
  }


  // ----------------------------------------------------------------------
  // OpenWriteTwiceReadOnceTest
  // ----------------------------------------------------------------------
  void Tester ::
    OpenWriteTwiceReadOnceTest()
  {
    clearFileBuffer();

    // Instantiate the Rules
    U32 numBins = 1;
    U32 fileSize = 100;
    U32 numFiles = 1;
    InitFileSystem initFileSystem(numBins, fileSize, numFiles);
    OpenFile openFile;
    ResetFile resetFile;
    Cleanup cleanup;
    WriteData writeData1(fileSize/2, 0x11);
    WriteData writeData2(fileSize/2, 0x22);
    ReadData readData(fileSize);

    // Run the Rules
    initFileSystem.apply(*this);
    openFile.apply(*this);
    writeData1.apply(*this);
    writeData2.apply(*this);
    resetFile.apply(*this);
    readData.apply(*this);

    cleanup.apply(*this);
    
  }
  // ----------------------------------------------------------------------
  // OpenWriteOnceReadTwiceTest
  // ----------------------------------------------------------------------
  void Tester ::
    OpenWriteOnceReadTwiceTest()
  {
    clearFileBuffer();

    // Instantiate the Rules
    U32 numBins = 1;
    U32 fileSize = 100;
    U32 numFiles = 1;
    InitFileSystem initFileSystem(numBins, fileSize, numFiles);
    OpenFile openFile;
    ResetFile resetFile;
    Cleanup cleanup;
    WriteData writeData(fileSize, 0xFF);
    ReadData readData(fileSize/2);

    // Run the Rules
    initFileSystem.apply(*this);
    openFile.apply(*this);
    writeData.apply(*this);
    resetFile.apply(*this);
    readData.apply(*this);
    readData.apply(*this);

    cleanup.apply(*this);
    
  }

  // ----------------------------------------------------------------------
  // OneFileReadDirectory
  // ----------------------------------------------------------------------
  void Tester ::
    OneFileReadDirectory()
  {
    clearFileBuffer();

    // Instantiate the Rules
    U32 numBins = 1;
    U32 fileSize = 100;
    U32 numFiles = 1;
    InitFileSystem initFileSystem(numBins, fileSize, numFiles);
    OpenFile openFile;
    Cleanup cleanup;
    WriteData writeData(fileSize, 0xFF);
    CloseFile closeFile;
    Listings listings;

    // Run the Rules
    initFileSystem.apply(*this);
    openFile.apply(*this);
    writeData.apply(*this);
    closeFile.apply(*this);
    listings.apply(*this);

    cleanup.apply(*this);
    
  }

  // Helper functions
  void Tester::clearFileBuffer()
  {
        this->curPtr = 0;
        memset(this->buffOut, 0xA5, BUFFER_SIZE);
  }


} // end namespace Os
