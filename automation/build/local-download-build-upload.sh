#!/bin/bash

# Export Variable
export GIT_HOME_DIR=/home/neeldharsandiya/neel/git_neel/

# Change Directory
cd $GIT_HOME_DIR

# Clone Repository with submodules
git clone --recurse-submodules https://neeldharsandiya2822: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@github.com/matrix-comsec-pvt-ltd/ipvs-nvr-app.git

# Download build dependencies from JFrog
curl -u admin:Neel@2822 -o /home/neeldharsandiya/neel/git_neel/ipvs-nvr-app/src/Application/Build/platform_upgrade.zip "http://192.168.27.92:8082/artifactory/matcom-ipvs-nvr/rk3588/release-artifacts/platform/8.7.0/platform_upgrade.zip"
curl -u admin:AKCpBtNTD6yAkngV6hWDtMhyRgDWynmqF7oiwzp7caQ51fDvCZhKpPt5CPkBDwc8WvTGZ33qA -o /home/neeldharsandiya/neel/git_neel/ipvs-nvr-app/src/Application/Build/Device_Client_Setup_8.7.52.exe "http://192.168.27.92:8082/artifactory/matcom-ipvs-nvr/device-client/release-artifacts/application/production/8.7.52/Device_Client_Setup_8.7.52.exe"
curl -u admin:Neel@2822 -o /home/neeldharsandiya/neel/git_neel/ipvs-nvr-app/src/Application/Build/host.tar.xz "http://192.168.27.92:8082/artifactory/matcom-ipvs-nvr/rk3588/build-dependencies/toolchain/V1/host.tar.xz"

# Compile and prepare package
cd $GIT_HOME_DIR/ipvs-nvr-app && make BOARD_TYPE=RK3588_NVRH RELEASE_TYPE=QA PASSWORD=neel release

# Upload release artifacts to JFrog
cd $GIT_HOME_DIR/ipvs-nvr-app/src/Application/Build
curl -uadmin:Neel@2822 -T /home/neeldharsandiya/neel/git_neel/ipvs-nvr-app/src/Application/Build/NVR_RK3588H-2.2.0.zip "http://192.168.27.92:8082/artifactory/matcom-ipvs-nvr/rk3588/release-artifacts/application/production/2.2.0/NVR_RK3588H-2.2.0.zip"