

    // ------------------------------------------------------------------------------------------------------
    // Rule:  InitFileSystem
    //
    // ------------------------------------------------------------------------------------------------------
    struct InitFileSystem : public STest::Rule<Os::Tester> {

            // ----------------------------------------------------------------------
            // Construction
            // ----------------------------------------------------------------------

            //! Constructor
            InitFileSystem(U32 numBins, U32 fileSize, U32 numFiles);

            // ----------------------------------------------------------------------
            // Public member functions
            // ----------------------------------------------------------------------

            //! Precondition
            bool precondition(
                const Os::Tester& state //!< The test state
            );

            //! Action
            void action(
                Os::Tester& state //!< The test state
            );

            U32 numBins;
            U32 fileSize;
            U32 numFiles;


    };

    



    // ------------------------------------------------------------------------------------------------------
    // Rule:  OpenFile
    //
    // ------------------------------------------------------------------------------------------------------
    struct OpenFile : public STest::Rule<Os::Tester> {

            // ----------------------------------------------------------------------
            // Construction
            // ----------------------------------------------------------------------

            //! Constructor
            OpenFile();

            // ----------------------------------------------------------------------
            // Public member functions
            // ----------------------------------------------------------------------

            //! Precondition
            bool precondition(
                const Os::Tester& state //!< The test state
            );

            //! Action
            void action(
                Os::Tester& state //!< The test state
            );


    };

    



    // ------------------------------------------------------------------------------------------------------
    // Rule:  Cleanup
    //
    // ------------------------------------------------------------------------------------------------------
    struct Cleanup : public STest::Rule<Os::Tester> {

            // ----------------------------------------------------------------------
            // Construction
            // ----------------------------------------------------------------------

            //! Constructor
            Cleanup();

            // ----------------------------------------------------------------------
            // Public member functions
            // ----------------------------------------------------------------------

            //! Precondition
            bool precondition(
                const Os::Tester& state //!< The test state
            );

            //! Action
            void action(
                Os::Tester& state //!< The test state
            );

    };

    



    // ------------------------------------------------------------------------------------------------------
    // Rule:  WriteData
    //
    // ------------------------------------------------------------------------------------------------------
    struct WriteData : public STest::Rule<Os::Tester> {

            // ----------------------------------------------------------------------
            // Construction
            // ----------------------------------------------------------------------

            //! Constructor
            WriteData(NATIVE_INT_TYPE size, U8 value);

            // ----------------------------------------------------------------------
            // Public member functions
            // ----------------------------------------------------------------------

            //! Precondition
            bool precondition(
                const Os::Tester& state //!< The test state
            );

            //! Action
            void action(
                Os::Tester& state //!< The test state
            );

            NATIVE_INT_TYPE size;
            U8 value;

    };

    



    // ------------------------------------------------------------------------------------------------------
    // Rule:  ReadData
    //
    // ------------------------------------------------------------------------------------------------------
    struct ReadData : public STest::Rule<Os::Tester> {

            // ----------------------------------------------------------------------
            // Construction
            // ----------------------------------------------------------------------

            //! Constructor
            ReadData(NATIVE_INT_TYPE size);

            // ----------------------------------------------------------------------
            // Public member functions
            // ----------------------------------------------------------------------

            //! Precondition
            bool precondition(
                const Os::Tester& state //!< The test state
            );

            //! Action
            void action(
                Os::Tester& state //!< The test state
            );

            NATIVE_INT_TYPE size;

    };

    



    // ------------------------------------------------------------------------------------------------------
    // Rule:  ResetFile
    //
    // ------------------------------------------------------------------------------------------------------
    struct ResetFile : public STest::Rule<Os::Tester> {

            // ----------------------------------------------------------------------
            // Construction
            // ----------------------------------------------------------------------

            //! Constructor
            ResetFile();

            // ----------------------------------------------------------------------
            // Public member functions
            // ----------------------------------------------------------------------

            //! Precondition
            bool precondition(
                const Os::Tester& state //!< The test state
            );

            //! Action
            void action(
                Os::Tester& state //!< The test state
            );

    };

    



    // ------------------------------------------------------------------------------------------------------
    // Rule:  CloseFile
    //
    // ------------------------------------------------------------------------------------------------------
    struct CloseFile : public STest::Rule<Os::Tester> {

            // ----------------------------------------------------------------------
            // Construction
            // ----------------------------------------------------------------------

            //! Constructor
            CloseFile();

            // ----------------------------------------------------------------------
            // Public member functions
            // ----------------------------------------------------------------------

            //! Precondition
            bool precondition(
                const Os::Tester& state //!< The test state
            );

            //! Action
            void action(
                Os::Tester& state //!< The test state
            );

    };

    



    // ------------------------------------------------------------------------------------------------------
    // Rule:  Listings
    //
    // ------------------------------------------------------------------------------------------------------
    struct Listings : public STest::Rule<Os::Tester> {

            // ----------------------------------------------------------------------
            // Construction
            // ----------------------------------------------------------------------

            //! Constructor
            Listings();

            // ----------------------------------------------------------------------
            // Public member functions
            // ----------------------------------------------------------------------

            //! Precondition
            bool precondition(
                const Os::Tester& state //!< The test state
            );

            //! Action
            void action(
                Os::Tester& state //!< The test state
            );

    };

    