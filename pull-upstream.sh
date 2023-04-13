#!/bin/bash

upstream_url="https://github.com/themmj/assignment-template.git"
upstream_branch="main"

git remote get-url upstream &> /dev/null || git remote add --fetch upstream $upstream_url
git fetch upstream $upstream_branch && git rebase upstream/$upstream_branch
