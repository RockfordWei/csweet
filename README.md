# USING CPP IN SWIFT 4.1

This is a demo to show how to bridge C++ in your Swift source.

## C++11 Feature

To enable C++11 Feature, using `-std=c++11` flag, for example:

```
# build:
swift build -Xcxx -std=c++11

# build release:
swift build -c release -Xcxx -std=c++11

# test:
swift test -Xcxx -std=c++11

# run:
swift run -Xcxx -std=c++11
```

If using Xcode, then such flags as above must be set as well.
