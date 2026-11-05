#!/bin/bash


cp -a ../dev/homelab/dwc-bots/* .
zip -r -X zzz_dwc_bots.pk3 botfiles/ models/ scripts/
cp zzz_dwc_bots.pk3 ~/q3e/baseq3/
