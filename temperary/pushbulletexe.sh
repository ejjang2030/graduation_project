#! /bin/bash

API1_EJ="o.pYIiEMmGG8arl5bBFnHfnMIxJMztjGlF"
API2_HS="o.76NuDVdF6ig4bwr54obYM2VjfPihzAtV"
API3_SH="o.xghHqEqyPNXVocDmPHft1jiAG5yc6TLG"
API4_SJ="o.iI78YvpCFjkgVz4iMX7GTt05TXMNkjhA"
MSG="$1"

curl -u $API1_EJ: https://api.pushbullet.com/v2/pushes -d type=note -d title="Alert" -d body="$MSG"
curl -u $API2_HS: https://api.pushbullet.com/v2/pushes -d type=note -d title="Alert" -d body="$MSG"
curl -u $API3_SH: https://api.pushbullet.com/v2/pushes -d type=note -d title="Alert" -d body="$MSG"
