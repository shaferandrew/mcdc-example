# mcdc-example
Demonstration of MCDC code coverage tools.

## Building
### Setup the build system
```bash
ajshafer@JSLWL2023073010:~/dev/mcdc-example$ mkdir build-mcdc
ajshafer@JSLWL2023073010:~/dev/mcdc-example$ cd build-mcdc/
ajshafer@JSLWL2023073010:~/dev/mcdc-example/build-mcdc$ cmake -B . -S ..
-- The CXX compiler identification is GNU 11.4.0
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /home/ajshafer/dev/mcdc-example/build-mcdc
```

### Build with ctclaunch
```bash
ajshafer@JSLWL2023073010:~/dev/mcdc-example/build-mcdc$ ctclaunch -c /home/ajshafer/dev/mcdc-example/.ctc.ini -v -i m cmake --build .
[ 33%] Building CXX object CMakeFiles/example_library.dir/source/Foo.cpp.o
ctc: /usr/bin/c++ -I/home/ajshafer/dev/mcdc-example/include -I/home/ajshafer/dev/mcdc-example/source -g -Wall -Wextra -Werror -Wfloat-conversion -Wredundant-decls -Wshadow -std=c++11 -MD -MT CMakeFiles/example_library.dir/source/Foo.cpp.o -MF CMakeFiles/example_library.dir/source/Foo.cpp.o.d -o CMakeFiles/example_library.dir/source/Foo.cpp.o -c /home/ajshafer/dev/mcdc-example/source/Foo.cpp
ctc: processing file /home/ajshafer/dev/mcdc-example/source/Foo.cpp
ctc: /usr/bin/c++ -E -D__CTC__ -I/home/ajshafer/dev/mcdc-example/include -I/home/ajshafer/dev/mcdc-example/source -g -Wall -Wextra -Werror -Wfloat-conversion -Wredundant-decls -Wshadow -std=c++11 /home/ajshafer/dev/mcdc-example/source/Foo.cpp -o /tmp/CTC.9590.1.Foo.i
ctc: creating /home/ajshafer/dev/mcdc-example/build-mcdc/MON.sym
ctc: adding file to /home/ajshafer/dev/mcdc-example/build-mcdc/MON.sym
ctc: /usr/bin/c++ -g -Wall -Wextra -Wfloat-conversion -Wredundant-decls -Wshadow -std=c++11 -o CMakeFiles/example_library.dir/source/Foo.cpp.o -c -I/home/ajshafer/bin/ctc-v10.2.1/include /tmp/CTC.9590.2.Foo.cpp
[ 16%] Building CXX object CMakeFiles/example_library.dir/source/Printer.cpp.o
ctc: /usr/bin/c++ -I/home/ajshafer/dev/mcdc-example/include -I/home/ajshafer/dev/mcdc-example/source -g -Wall -Wextra -Werror -Wfloat-conversion -Wredundant-decls -Wshadow -std=c++11 -MD -MT CMakeFiles/example_library.dir/source/Printer.cpp.o -MF CMakeFiles/example_library.dir/source/Printer.cpp.o.d -o CMakeFiles/example_library.dir/source/Printer.cpp.o -c /home/ajshafer/dev/mcdc-example/source/Printer.cpp
ctc: processing file /home/ajshafer/dev/mcdc-example/source/Printer.cpp
ctc: /usr/bin/c++ -E -D__CTC__ -I/home/ajshafer/dev/mcdc-example/include -I/home/ajshafer/dev/mcdc-example/source -g -Wall -Wextra -Werror -Wfloat-conversion -Wredundant-decls -Wshadow -std=c++11 /home/ajshafer/dev/mcdc-example/source/Printer.cpp -o /tmp/CTC.9589.1.Printer.i
ctc: adding file to /home/ajshafer/dev/mcdc-example/build-mcdc/MON.sym
ctc: /usr/bin/c++ -g -Wall -Wextra -Wfloat-conversion -Wredundant-decls -Wshadow -std=c++11 -o CMakeFiles/example_library.dir/source/Printer.cpp.o -c -I/home/ajshafer/bin/ctc-v10.2.1/include /tmp/CTC.9589.2.Printer.cpp
[ 50%] Linking CXX static library libexample_library.a
[ 50%] Built target example_library
[ 66%] Building CXX object CMakeFiles/example_unit_test.dir/unit_test/PrinterTest.cpp.o
ctc: /usr/bin/c++ -I/home/ajshafer/dev/mcdc-example/include -I/home/ajshafer/dev/mcdc-example/source -g -Wall -Wextra -Werror -Wfloat-conversion -Wredundant-decls -Wshadow -std=c++11 -MD -MT CMakeFiles/example_unit_test.dir/unit_test/PrinterTest.cpp.o -MF CMakeFiles/example_unit_test.dir/unit_test/PrinterTest.cpp.o.d -o CMakeFiles/example_unit_test.dir/unit_test/PrinterTest.cpp.o -c /home/ajshafer/dev/mcdc-example/unit_test/PrinterTest.cpp
ctc: processing file /home/ajshafer/dev/mcdc-example/unit_test/PrinterTest.cpp
ctc: /usr/bin/c++ -E -D__CTC__ -I/home/ajshafer/dev/mcdc-example/include -I/home/ajshafer/dev/mcdc-example/source -g -Wall -Wextra -Werror -Wfloat-conversion -Wredundant-decls -Wshadow -std=c++11 /home/ajshafer/dev/mcdc-example/unit_test/PrinterTest.cpp -o /tmp/CTC.9632.1.PrinterTest.i
CTC++ warning 32: Abnormal use of case/default, not instrumented (file /home/ajshafer/dev/mcdc-example/unit_test/PrinterTest.cpp:12)
CTC++ warning 32: Abnormal use of case/default, not instrumented (file /home/ajshafer/dev/mcdc-example/unit_test/PrinterTest.cpp:12)
ctc: adding file to /home/ajshafer/dev/mcdc-example/build-mcdc/MON.sym
ctc: /usr/bin/c++ -g -Wall -Wextra -Wfloat-conversion -Wredundant-decls -Wshadow -std=c++11 -o CMakeFiles/example_unit_test.dir/unit_test/PrinterTest.cpp.o -c -I/home/ajshafer/bin/ctc-v10.2.1/include /tmp/CTC.9632.2.PrinterTest.cpp
[ 83%] Building CXX object CMakeFiles/example_unit_test.dir/unit_test/TrackedValueTest.cpp.o
ctc: /usr/bin/c++ -I/home/ajshafer/dev/mcdc-example/include -I/home/ajshafer/dev/mcdc-example/source -g -Wall -Wextra -Werror -Wfloat-conversion -Wredundant-decls -Wshadow -std=c++11 -MD -MT CMakeFiles/example_unit_test.dir/unit_test/TrackedValueTest.cpp.o -MF CMakeFiles/example_unit_test.dir/unit_test/TrackedValueTest.cpp.o.d -o CMakeFiles/example_unit_test.dir/unit_test/TrackedValueTest.cpp.o -c /home/ajshafer/dev/mcdc-example/unit_test/TrackedValueTest.cpp
ctc: processing file /home/ajshafer/dev/mcdc-example/unit_test/TrackedValueTest.cpp
ctc: /usr/bin/c++ -E -D__CTC__ -I/home/ajshafer/dev/mcdc-example/include -I/home/ajshafer/dev/mcdc-example/source -g -Wall -Wextra -Werror -Wfloat-conversion -Wredundant-decls -Wshadow -std=c++11 /home/ajshafer/dev/mcdc-example/unit_test/TrackedValueTest.cpp -o /tmp/CTC.9633.1.TrackedValueTest.i
CTC++ warning 32: Abnormal use of case/default, not instrumented (file /home/ajshafer/dev/mcdc-example/unit_test/TrackedValueTest.cpp:19)
CTC++ warning 32: Abnormal use of case/default, not instrumented (file /home/ajshafer/dev/mcdc-example/unit_test/TrackedValueTest.cpp:19)
CTC++ warning 32: Abnormal use of case/default, not instrumented (file /home/ajshafer/dev/mcdc-example/unit_test/TrackedValueTest.cpp:29)
CTC++ warning 32: Abnormal use of case/default, not instrumented (file /home/ajshafer/dev/mcdc-example/unit_test/TrackedValueTest.cpp:29)
CTC++ warning 32: Abnormal use of case/default, not instrumented (file /home/ajshafer/dev/mcdc-example/unit_test/TrackedValueTest.cpp:32)
CTC++ warning 32: Abnormal use of case/default, not instrumented (file /home/ajshafer/dev/mcdc-example/unit_test/TrackedValueTest.cpp:32)
CTC++ warning 32: Abnormal use of case/default, not instrumented (file /home/ajshafer/dev/mcdc-example/unit_test/TrackedValueTest.cpp:33)
CTC++ warning 32: Abnormal use of case/default, not instrumented (file /home/ajshafer/dev/mcdc-example/unit_test/TrackedValueTest.cpp:33)
ctc: adding file to /home/ajshafer/dev/mcdc-example/build-mcdc/MON.sym
ctc: /usr/bin/c++ -g -Wall -Wextra -Wfloat-conversion -Wredundant-decls -Wshadow -std=c++11 -o CMakeFiles/example_unit_test.dir/unit_test/TrackedValueTest.cpp.o -c -I/home/ajshafer/bin/ctc-v10.2.1/include /tmp/CTC.9633.2.TrackedValueTest.cpp
[100%] Linking CXX executable unit_tests
ctc: /usr/bin/c++ CMakeFiles/example_unit_test.dir/unit_test/PrinterTest.cpp.o CMakeFiles/example_unit_test.dir/unit_test/TrackedValueTest.cpp.o -o unit_tests libexample_library.a -lgtest_main -lgtest -lpthread -L/home/ajshafer/bin/ctc-v10.2.1/lib/i386 -L/home/ajshafer/bin/ctc-v10.2.1/lib/x86_64 -lctc
/usr/bin/ld: skipping incompatible /home/ajshafer/bin/ctc-v10.2.1/lib/i386/libctc.a when searching for -lctc
[100%] Built target example_unit_test
ctclaunch has finished.
```

### Execute
```bash
ajshafer@JSLWL2023073010:~/dev/mcdc-example/build-mcdc$ ./unit_tests
Running main() from ./googletest/src/gtest_main.cc
[==========] Running 4 tests from 2 test suites.
[----------] Global test environment set-up.
[----------] 1 test from PrinterTest
[ RUN      ] PrinterTest.DefaultPublish
[       OK ] PrinterTest.DefaultPublish (5 ms)
[----------] 1 test from PrinterTest (6 ms total)

[----------] 3 tests from TrackedValueTest
[ RUN      ] TrackedValueTest.ConstructorException
[       OK ] TrackedValueTest.ConstructorException (0 ms)
[ RUN      ] TrackedValueTest.GetValues
[       OK ] TrackedValueTest.GetValues (0 ms)
[ RUN      ] TrackedValueTest.SetBounds
[       OK ] TrackedValueTest.SetBounds (0 ms)
[----------] 3 tests from TrackedValueTest (1 ms total)

[----------] Global test environment tear-down
[==========] 4 tests from 2 test suites ran. (11 ms total)
[  PASSED  ] 4 tests.
```

### Report
```bash
ajshafer@JSLWL2023073010:~/dev/mcdc-example/build-mcdc$ ctcreport -nsb -html
% Reading symbol file 'MON.sym' (Elapsed 0 sec)
% Reading data file 'MON.dat' (Elapsed 0 sec)
% Extracting Headers (Elapsed 0 sec)
% Preparing Additional Data (Elapsed 0 sec)
% Calculating Coverage (Elapsed 0 sec)
% Using template 'html_template' (9fa8e014)
% Writing Overview Report (Elapsed 0 sec)
% Writing Detail Reports (Elapsed 0 sec)
% Writing Source Code Reports (Elapsed 0 sec)
Report generated (Elapsed 0 sec)
```

## Getting Rid of the Variants
In `CMakeLists.txt` if you comment out `source/Foo.cpp` in the list of sources then `TrackedValue` will NOT have variants created.
