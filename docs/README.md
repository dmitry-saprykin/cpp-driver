# Documentation

The documentation can view directly from [cassandra.h](/include/cassandra.h) and in the [topics](/docs/topics) directory. It's also possible to generate more readable documentation using the instructions below.

Note: The Doxygen documentation can also be generated by running `cmake; make docs` from the driver's root directory.

## Dependencies

* Ruby 1.9+
* [Bundler](http://bundler.io/)

## To generate:

This generates both the Doxygen and website documentation (under 'docs/doxygen' and 'docs/gh-pages'). It should be run from this directory ('docs').

```bash
gem install bundler
bundle install
rake
```

## To view:

```bash
cd gh-pages
python -m SimpleHTTPServer 8080
```

After this you should be able to view the documenation at [http://localhost:8080](http://localhost:8080/).
