find . -type f -name "*.sh" -print -execdir basename ';' | sed -e 's/\.sh$//'
