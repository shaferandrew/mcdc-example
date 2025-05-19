#include <sstream>
#include <stdexcept>

namespace example {

template <class T>
TrackedValue<T>::TrackedValue(unsigned duration) :
  rawData(duration),
  data(duration){
    if (duration == 0) {
        throw std::invalid_argument("Duration must be greater than zero.");
    }
}

template <class T>
void TrackedValue<T>::setLowerBound(const T& lowerBoundIn) {
    if (lowerBoundIn > upperBound) {
        std::ostringstream oss;
        oss << "Lower bound " << lowerBoundIn << " is not <= upper bound " << upperBound
            << ". Using existing lower bound " << lowerBound << "\n";
        throw std::invalid_argument(oss.str());
    }
    else {
        lowerBound = lowerBoundIn;
    }
}
template <class T>
void TrackedValue<T>::setUpperBound(const T& upperBoundIn) {
    if (lowerBound > upperBoundIn) {
        std::ostringstream oss;
        oss << "Upper bound " << upperBoundIn << " is not >= lower bound " << lowerBound
            << ". Using existing upper bound " << upperBound << "\n";
        throw std::invalid_argument(oss.str());
    }
    else {
        upperBound = upperBoundIn;
    }
}

}
