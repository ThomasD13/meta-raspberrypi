RPIFW_DATE ?= "20190709"
SRCREV ?= "356f5c2880a3c7e8774025aa6fc934a617553e7b"
RPIFW_SRC_URI ?= "https://github.com/raspberrypi/firmware/archive/${SRCREV}.tar.gz"
RPIFW_S ?= "${WORKDIR}/firmware-${SRCREV}"

SRC_URI = "${RPIFW_SRC_URI}"
SRC_URI[md5sum] = "5962784e7963f0116cd1519e47749b25"
SRC_URI[sha256sum] = "6e07d98e4229ba7a1970a4c475fc6b8631823d200d3b8734a508e7ff5ea4c120"

PV = "${RPIFW_DATE}"