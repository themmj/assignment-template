#!/bin/bash

upstream_url="https://github.com/themmj/assignment-template.git"
upstream_branch="main"

git remote get-url upstream &> /dev/null || git remote add --fetch upstream $upstream_url
rebase_error=$(git fetch upstream $upstream_branch &> /dev/null && git rebase upstream/$upstream_branch 2>&1)
if [ $? -ne 0 ]; then
    [[ "$rebase_error" =~ "unstaged changes" ]] &&
        echo "unable to update: your local changes have not been commited"
    [[ "$rebase_error" =~ "CONFLICT" ]] &&
        echo "unable to update: there are merge conflicts, please contact your lecturer" &&
        echo "if you know your way around with git you can attempt to rebase yourself from upstream/$upstream_branch" &&
        git rebase --abort
else
    echo "you're now on the most recent version"
fi
exit 0