from pathlib import Path

setup_kwargs = dict(
    name="GKReplicationGraph",
    version="0.0.0",
    description="",
    long_description=(Path(__file__).parent / "README.rst").read_text(),
    author="",
    author_email="@",
    license="BSD-3-Clause",
    url="https://.gitlab.io/GKReplicationGraph/o",
    packages=[
        "GKReplicationGraph",
    ],
    package_dir={"": "Source/python"},
    namespace_packages=[
        "GKReplicationGraph",
    ],
    zip_safe=True,
    setup_requires=["setuptools"],
    install_requires=[],
    python_requires=">=3.8",
)


if __name__ == "__main__":
    from setuptools import setup

    setup(**setup_kwargs)
