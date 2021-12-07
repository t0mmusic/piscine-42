cat /etc/passwd \
| grep -v "#" \
| sed -n 'n;p' \
| sort -r \
