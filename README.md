# aws-sdk-cpp-bazel

Example showing how to build the AWS C++ SDK with Bazel using rules_foreign_cc.

First ensure, you have the system dependencies of the SDK installed on your system:

See: https://docs.aws.amazon.com/sdk-for-cpp/v1/developer-guide/setup-linux.html#additional-requirements-for-linux-systems

# Build:

*Note*: We'll need to provide the full path to the Bazel cache directory because the CMake rules in the AWS C++ SDK make
modifications to the sandbox environment (which Bazel won't be happy with). This is not an ideal solution, but I've
found that this is the only way to get it to work.

`bazel build //:main --sandbox_writable_path=<full path to Bazel .cache directory>`

# Run:

`bazel run //:main`
