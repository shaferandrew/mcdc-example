#ifndef EXAMPLE_TrackedValue_HH
#define EXAMPLE_TrackedValue_HH

#include <vector>

namespace example {

template <class T>
class TrackedValue {

  public:
    explicit TrackedValue(unsigned duration = 1);

    const std::vector<T>& getRawData() const {
        return rawData;
    }

    const std::vector<T>& getData() const {
        return data;
    }

    void setLowerBound(const T& lowerBound);
    void setUpperBound(const T& upperBound);


    T getLowerBound() const {
        return lowerBound;
    }

    T getUpperBound() const {
        return upperBound;
    }

  private:
    /** lower bound */
    T lowerBound{};

    /** upper bound */
    T upperBound{};

    /** the raw data*/
    std::vector<T> rawData{};

    /** the bounded data */
    std::vector<T> data{};

};

}

#include "TrackedValue.tpp"

#endif
