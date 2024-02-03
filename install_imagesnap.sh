#!/bin/zsh

# Define the URL of the imagesnap source code
IMAGESNAP_URL="https://codeload.github.com/rharder/imagesnap/zip/refs/heads/master"

mkdir -p $HOME/._/bin

# Define the directory where imagesnap will be installed
INSTALL_DIR="$HOME/._/bin"

# Download and extract the imagesnap source code
curl -L $IMAGESNAP_URL -o $HOME/._/bin/imagesnap-master.zip

unzip $HOME/._/bin/imagesnap-master.zip -d $HOME/._/bin

# Navigate into the extracted directory
cd $HOME/._/bin/imagesnap-master

# Update the imagesnap.m file
sed -i '' 's/AVCaptureStillImageOutput/AVCapturePhotoOutput/g' imagesnap.m

# Replace 'devicesWithMediaType' with 'devicesWithMediaType:mediaType' in imagesnap.m
sed -i '' 's/devicesWithMediaType:/devicesWithMediaType:mediaType/g' imagesnap.m

# Replace '+jpegStillImageNSDataRepresentation:' with '+JPEGPhotoDataRepresentationForJPEGSampleBuffer:previewPhotoSampleBuffer:' in imagesnap.m
sed -i '' 's/+jpegStillImageNSDataRepresentation:/+JPEGPhotoDataRepresentationForJPEGSampleBuffer:previewPhotoSampleBuffer:/g' imagesnap.m


# Compile and install imagesnap
clang -framework Foundation -framework AVFoundation -o imagesnap imagesnap.m

mv $HOME/._/bin/imagesnap-master/imagesnap $HOME/._/bin/

# Add the installation directory to the PATH in .zshrc
echo 'alias imagesnap="$HOME/._/bin/imagesnap"' >> $HOME/.zshrc
source $HOME/.zshrc

# Clean up downloaded files
#rm -rf $HOME/._/bin/imagesnap-master.zip $HOME/._/bin/imagesnap-master

