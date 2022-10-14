MyFolders=$(find . -maxdepth 1 -mindepth 1 -type d -printf '%f\n')
for folder in $MyFolders
do
    cd $folder
	mv notes.md README.md
	cd ..
done