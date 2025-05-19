#include <gtest/gtest.h>

#include "Printer.hh"

namespace {

TEST(PrinterTest, DefaultPublish) {
    std::string myString{"My message to publish."};
    testing::internal::CaptureStdout();
    example::Printer::publish(myString);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, myString + "\n");
}

}
