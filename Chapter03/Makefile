install:
	sudo apt-get install gcovr lcov pkg-config curl zip unzip tar ccache

install_doc:
	pip install jinja2 Pygments
	sudo apt-get install doxygen

setup:
	pip install conan
	conan user

prepare:
	rm -rf build
	mkdir build
