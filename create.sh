#!/bin/bash


cp -a ../dev/homelab/q3bots/* .
zip -r -X zzz_dwc_bots.pk3 botfiles/ models/ scripts/
cp zzz_dwc_bots.pk3 ~/q3e/baseq3/
