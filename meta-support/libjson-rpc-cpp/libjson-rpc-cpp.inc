DESCRIPTION = "C++ library thath provides a json-rpc (remote procedure call) framework for Linux and MacOS (or any other UNIX derivate). It is fully JSON-RPC 2.0 compatible (JSON-RPC 2.0) and provides additional features, such as generic authentication mechanisms."
AUTHOR = "Peter Spiess-Knafl"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE.txt;md5=0acc0fa1d2d32f8145d377ce27478614"
SECTION = "lib"

#DEPENDS = "curl libmicrohttpd jsoncpp"
DEPENDS = "curl "

PR = "r1"

S = "${WORKDIR}/git"
inherit cmake
SRCREV = "855fed9aba6fcc546bc6e070b6e0041959f44b6f"

EXTRA_OECMAKE += "-DCOMPILE_TESTS=NO \
-DCOMPILE_STUBGEN=NO \
-DHTTP_CLIENT=NO \
-DBUILD_SHARED_LIBS=ON \
-DCMAKE_INSTALL_LIBDIR="

SRC_URI = "git://github.com/toolmmy/libjson-rpc-cpp.git;protocol=http \
		   file://001_COCHMI-33_lia1hc_support-websocket-feature.patch"

BBCLASSEXTEND = "native"

