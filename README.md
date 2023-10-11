# Rust Thorvg bindings

## Contents
- [ThorVG](#thorvg)
- [Installation](#install)

[](#Installation)
## required

LLVM installation required

## Install with vcpkg

You can download and install pre-packaged ThorVG using the vcpkg package manager.

Clone the vcpkg repo. Make sure you are in the directory you want the tool installed to before doing this.

```
git clone https://github.com/Microsoft/vcpkg.git
```

Run the bootstrap script to build the vcpkg.

```
./bootstrap-vcpkg.sh
```

Install the ThorVG package.
```
./vcpkg install thorvg llvm
```
