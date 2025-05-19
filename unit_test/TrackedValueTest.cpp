#include <gtest/gtest.h>

#include "TrackedValue.hh"

#include <numeric>
#include <stdexcept>

namespace {

class TrackedValueTest : public testing::Test {
  protected:
    example::TrackedValue<double> tracker;

    TrackedValueTest() :
      tracker(5){}
};

TEST_F(TrackedValueTest, ConstructorException) {
    EXPECT_THROW(example::TrackedValue<double>(0), std::invalid_argument);
}

TEST_F(TrackedValueTest, GetValues) {
    tracker.getRawData();
    tracker.getData();
}

TEST_F(TrackedValueTest, SetBounds) {
    // Initially set to 0, 0; try to set lower first
    EXPECT_THROW(tracker.setLowerBound(1), std::invalid_argument);

    // Set upper
    EXPECT_NO_THROW(tracker.setUpperBound(10));
    EXPECT_NO_THROW(tracker.setLowerBound(5));
}

}
